from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    max_num = float("-inf")
    return [max_num := max(max_num, num) for num in numbers]

numbers = [5, 2, 7, 1, 4, 3, 6]
result = rolling_max(numbers)
result