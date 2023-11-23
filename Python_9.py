from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    numbers = input().split()
    numbers = [int(num) for num in numbers]
    max_numbers = []
    current_max = float('-inf')
    for num in numbers:
        current_max = max(current_max, num)
        max_numbers.append(current_max)
    return max_numbers