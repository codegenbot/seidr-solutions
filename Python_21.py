from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    min_num = min(numbers)
    max_num = max(numbers)
    return [(num - min_num) / (max_num - min_num) for num in numbers]


# Read input from the user
input_numbers = input("Enter numbers (space-separated): ").split()
numbers = [float(num) for num in input_numbers]

# Call the function with the input
result = rescale_to_unit(numbers)

# Print the result
print("Rescaled numbers:", result)