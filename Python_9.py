from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    max_numbers = []
    current_max = float('-inf')
    for number in range(len(numbers)):
        current_max = max(current_max, numbers[number])
        max_numbers.append(current_max)
    return max_numbers