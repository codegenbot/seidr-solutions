from typing import List, Tuple

def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    closest = float('inf')
    closest_pair = ()
    for i in range(len(numbers) - 1):
        diff = abs(numbers[i] - numbers[i+1])
        if diff < closest:
            closest = diff
            closest_pair = (numbers[i], numbers[i+1])
    return closest_pair

# User input
numbers = []
n = int(input())  # Read the number of elements first
for _ in range(n):
    numbers.append(float(input()))  # Read each element on a new line

# Call the function and print the result
result = find_closest_elements(numbers)
print(result)