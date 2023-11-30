from typing import List, Tuple


def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    closest = float("inf")
    closest_pair = ()
    for i in range(len(numbers) - 1):
        diff = abs(numbers[i] - numbers[i + 1])
        if diff < closest:
            closest = diff
            closest_pair = (numbers[i], numbers[i + 1])
    return closest_pair


# Read input from user
numbers = [float(x) for x in input().split()]

# Call the function with input and print the result
result = find_closest_elements(numbers)
print(*result)