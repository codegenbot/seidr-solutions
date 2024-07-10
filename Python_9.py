def rolling_max(numbers: List[int]) -> List[int]:
    max_nums = []
    current_max = float("-inf")
    for num in numbers:
        current_max = max(current_max, num)
        max_nums.append(current_max)
    return max_nums