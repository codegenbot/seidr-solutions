def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    max_val = numbers[0]
    for num in numbers:
        result.append(max(num, max_val))
        max_val = num if num > max_val else max_val
    return result