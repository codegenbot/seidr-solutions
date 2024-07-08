from typing import List, Tuple

def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    numbers.sort()
    min_diff = float("inf")
    result = None
    for i in range(len(numbers) - 1):
        diff = numbers[i + 1] - numbers[i]
        if diff < min_diff:
            min_diff = diff
            result = (numbers[i], numbers[i + 1])
    return result

# Get input from the user
numbers = [float(x) for x in input("Enter a list of numbers separated by spaces: ").split()]

# Call the function with the input numbers
output = find_closest_elements(numbers)
print(output)