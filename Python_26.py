from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(set(numbers))

# Read input from user
numbers_string = input()

# Convert the input string into a list of integers
numbers = list(map(int, numbers_string.split()))

# Call the remove_duplicates function with the input numbers
result = remove_duplicates(numbers)

# Print the result
print(result)