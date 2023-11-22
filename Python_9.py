from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    try:
        numbers = list(map(int, numbers.split()))
    except ValueError:
        return []
    
    max_numbers = []
    current_max = float('-inf')
    for number in numbers:
        current_max = max(current_max, number)
        max_numbers.append(current_max)
    return max_numbers