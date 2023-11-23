from typing import List, Tuple

def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    min_diff = float('inf')
    closest_pair = ()
    for i in range(len(numbers) - 1):
        diff = numbers[i+1] - numbers[i]
        if diff < min_diff:
            min_diff = diff
            closest_pair = (numbers[i], numbers[i+1])
    return closest_pair

# Replace this line with an appropriate way to receive the input
input_numbers = [1.5, 2.3, 4.7, 3.2, 5.1]
result = find_closest_elements(input_numbers)
print(result[0], result[1])