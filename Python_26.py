from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(set(numbers))

# Read input from user
numbers = list(map(int, input().split()))

# Call the modified function
result = remove_duplicates(numbers)

# Print the result
print(result)