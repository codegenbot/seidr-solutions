from typing import List, Tuple

def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    if not all(isinstance(num, float) for num in numbers):
        raise TypeError("Input list must contain only float numbers")
    
    numbers.sort()
    min_diff = float("inf")
    result = (0.0, 0.0)
    
    for i in range(len(numbers) - 1):
        diff = abs(numbers[i] - numbers[i + 1])
        if diff < min_diff:
            min_diff = diff
            result = (numbers[i], numbers[i + 1])
    
    return result