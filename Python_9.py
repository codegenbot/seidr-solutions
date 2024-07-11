def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    max_val = numbers[0]
    for num in numbers:
        if num > max_val:
            max_val = num
        result.append(max_val)
    return result