from typing import List, Tuple


def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    numbers.sort()
    min_diff = float("inf")
    result = (0.0, 0.0)
    for i in range(len(numbers) - 1):
        diff = abs(numbers[i] - numbers[i + 1])
        if diff < min_diff:
            min_diff = diff
            result = (numbers[i], numbers[i + 1])
    return result


# Read input from user
numbers = [
    float(x) for x in input("Enter a list of floats separated by spaces: ").split()
]

# Call the function with user input
output = find_closest_elements(numbers)
print(output)