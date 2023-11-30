from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    max_numbers = []
    current_max = float('-inf')
    for num in numbers:
        current_max = max(current_max, num)
        max_numbers.append(current_max)
    return max_numbers

# Read input from the user
input_numbers = input("Enter a list of numbers: ").split()
input_numbers = [int(num) for num in input_numbers]

# Call the rolling_max function with the input numbers
result = rolling_max(input_numbers)

# Print the result
print("Rolling maximum numbers:", result)