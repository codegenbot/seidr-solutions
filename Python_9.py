def rolling_max(numbers: List[int]) -> List[int]:
    max_values = []
    max_val = None
    for num in numbers:
        if max_val is None or num > max_val:
            max_val = num
        max_values.append(max_val)
    return max_values