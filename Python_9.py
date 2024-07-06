def rolling_max(numbers: list[int]) -> list[int]:
    result = []
    max_so_far = float('-inf')  
    for num in numbers:
        max_so_far = max(num, max_so_far)
        result.append(max_so_far)
    return result