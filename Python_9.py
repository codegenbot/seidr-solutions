from typing import List
def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    max_so_far = float('-inf')
    for num in numbers:
        max_so_far = max(max_so_far, num)
        result.append(max_so_far)
    return result

# Input
numbers = [10, 5, 15, 7, 6]
rolling_max(numbers)