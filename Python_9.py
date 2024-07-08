def rolling_max(numbers: List[int]) -> List[int]:
    max_rolling_sum = [0]
    current_max = float('-inf')
    for num in numbers:
        current_max = max(current_max, num)
        max_rolling_sum.append(current_max)
    return max_rolling_sum