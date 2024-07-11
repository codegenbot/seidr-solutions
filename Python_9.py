from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    maxes = []
    current_max = numbers[0]
    for num in numbers:
        if num > current_max:
            current_max = num
        maxes.append(current_max)
    return maxes