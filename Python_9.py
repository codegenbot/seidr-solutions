from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    max_so_far = float('-inf')
    max_numbers = []
    for num in numbers:
        max_so_far = max(max_so_far, num)
        max_numbers.append(max_so_far)
    return max_numbers