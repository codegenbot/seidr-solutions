from typing import List, Tuple

def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    if not numbers or len(numbers) < 2:
        return (0.0, 0.0)
    
    numbers.sort()
    min_diff = float("inf")
    result = (0.0, 0.0)
    for i in range(len(numbers) - 1):
        diff = abs(numbers[i] - numbers[i + 1])
        if diff < min_diff:
            min_diff = diff
            result = (numbers[i], numbers[i + 1])
    return result

# Example input
numbers = [1.1, 2.2, 3.3, 4.4, 5.5]
print(find_closest_elements(numbers))