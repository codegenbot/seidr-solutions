def rolling_max(numbers: list) -> list:
    result = []
    current_max = float('-inf')
    for num in numbers:
        if num > current_max:
            current_max = num
        result.append(current_max)
    return result