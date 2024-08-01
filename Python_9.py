def rolling_max(numbers: List[int]) -> List[int]:
    result = [
        max(max_subarray)
        for max_subarray in (numbers[: i + 1] for i in range(len(numbers)))
    ]
    return result