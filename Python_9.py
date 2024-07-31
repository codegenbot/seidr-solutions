def rolling_max(numbers: List[int]) -> List[int]:
    result = [
        max(nums)
        for nums in [[n for n in numbers[: i + 1]] for i in range(len(numbers))]
    ]
    return result