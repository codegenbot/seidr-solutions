from typing import List, Tuple
def find_closest_elements(numbers: str) -> Tuple[float, float]:
    numbers = list(map(float, numbers.split(',')))
    if len(numbers) < 2:
        return "Input must contain at least two numbers"
    
    numbers.sort()
    min_diff = float("inf")
    result = None
    for i in range(len(numbers) - 1):
        diff = numbers[i + 1] - numbers[i]
        if diff < min_diff:
            min_diff = diff
            result = (numbers[i], numbers[i + 1])
    return result