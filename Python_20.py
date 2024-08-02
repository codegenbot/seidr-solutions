from typing import List, Tuple

def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    numbers.sort()
    min_diff = float("inf")
    result = (0.0, 0.0)
    for i in range(len(numbers) - 1):
        diff = numbers[i + 1] - numbers[i]
        if diff < min_diff:
            min_diff = diff
            result = (numbers[i], numbers[i + 1])
    return result

input_numbers = input("Enter a list of floats in the format [1.0, 2.0, 3.0]: ")
numbers = [float(x) for x in input_numbers.strip('[]').split(',')]
print(find_closest_elements(numbers))