from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    max_numbers = []
    current_max = float("-inf")
    for num in numbers:
        current_max = max(current_max, num)
        max_numbers.append(current_max)
    return max_numbers


# Get input from the user
numbers = list(map(int, input("Enter a list of integers: ").split()))

# Call the rolling_max function with the input
result = rolling_max(numbers)

# Print the output
print(result)