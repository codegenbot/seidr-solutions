from typing import List

def all_prefixes(string: str) -> List[str]:
    return [string[: i + 1] for i in range(len(string)]

# Get user input
user_input = input("Enter a string: ")

# Call the function with user input
result = all_prefixes(user_input)

# Print the result
print(result)