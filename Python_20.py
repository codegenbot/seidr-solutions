from typing import List, Tuple

def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    numbers.sort()
    closest_elements = (numbers[0], numbers[1])
    min_difference = abs(numbers[0] - numbers[1])
    for i in range(1, len(numbers) - 1):
        difference = abs(numbers[i] - numbers[i+1])
        if difference < min_difference:
            min_difference = difference
            closest_elements = (numbers[i], numbers[i+1])
    return closest_elements