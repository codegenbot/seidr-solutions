```
def rolling_max(numbers: List[int]) -> List[int]:
    current_max = float('-inf')
    max_rolling_sum = [current_max]
    for num in numbers:
        current_max = max(current_max, num)
        max_rolling_sum.append(current_max)
    return max_rolling_sum