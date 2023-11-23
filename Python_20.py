from typing import List, Tuple

def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    if len(numbers) < 2:
        return ()
    
    min_diff = float('inf')
    closest_pair = ()
    for i in range(len(numbers) - 1):
        diff = numbers[i+1] - numbers[i]
        if diff < min_diff:
            min_diff = diff
            closest_pair = (numbers[i], numbers[i+1])
    return closest_pair

input_numbers = [5.4, 2.7, 8.1, 3.2]
result = find_closest_elements(input_numbers)
print(result)