from typing import list

def rolling_max(numbers: list) -> list:
    result = []
    max_so_far = numbers[0]
    for num in numbers:
        result.append(max(num, max_so_far))
        max_so_far = max(max_so_far, num)
    return result