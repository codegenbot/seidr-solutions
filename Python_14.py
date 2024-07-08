from typing import List

def all_prefixes(string: str) -> List[str]:
    return [string[: i + 1] for i in range(len(string)]

# Get input from user
user_input = input("Enter a string: ")

# Call the function with the user input and print the output
output = all_prefixes(user_input)
print(output)