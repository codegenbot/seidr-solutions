from typing import List


def concatenate(strings: List[str]) -> str:
    return "".join(strings)


# Read input from user
strings = input().split()

# Call the concatenate function with user input
result = concatenate(strings)

# Print the result
print(result)