from typing import List

def rolling_max(numbers: List[int]) -> list:
    result = []
    max_so_far = numbers[0]
    for num in numbers:
        result.append(max(num, max_so_far))
        max_so_far = max(max_so_far, num)
    return result