def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    current_max = 0
    for num in numbers:
        if num > current_max:
            current_max = num
        result.append(current_max)
    return result