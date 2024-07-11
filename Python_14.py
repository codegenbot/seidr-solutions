from typing import List

def all_prefixes(string: str) -> List[str]:
    return [string[: i + 1] for i in range(len(string)]

# Read input from the user
input_string = input("Enter a string: ")

# Call the function with the input
result = all_prefixes(input_string)

# Print the output
print(result)