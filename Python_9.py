def rolling_max(numbers: List[int]) -> List[int]:
    result = [
        max(i)
        for i in zip(
            *[[(num) for num in numbers[: i + 1]] for i in range(len(numbers))]
        )
    ]
    return result