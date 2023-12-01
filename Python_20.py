from typing import List, Tuple

def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    numbers.sort()
    min_diff = float('inf')
    closest_nums = ()
    for i in range(len(numbers)-1):
        diff = numbers[i+1] - numbers[i]
        if diff < min_diff:
            min_diff = diff
            closest_nums = (numbers[i], numbers[i+1])
    return closest_nums

# Read input from user
numbers = input("Enter a list of numbers: ").split()
numbers = [float(num) for num in numbers]

# Call the function and print the result
result = find_closest_elements(numbers)
print(f"The closest numbers are: {result[0]} and {result[1]}")