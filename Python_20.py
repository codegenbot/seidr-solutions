from typing import List, Tuple

def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    numbers.sort()
    min_difference = float('inf')
    closest_elements = (numbers[0], numbers[1])
    for i in range(len(numbers)-1):
        diff = abs(numbers[i] - numbers[i+1])
        if diff < min_difference:
            min_difference = diff
            closest_elements = (numbers[i], numbers[i+1])
    return closest_elements