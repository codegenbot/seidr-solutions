def rolling_max(numbers: List[int]) -> List[int]:
    max_values = []
    max_val = float("-inf")
    for num in numbers:
        max_val = max(max_val, num)
        max_values.append(max_val)
    return max_values