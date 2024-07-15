from typing import List

def all_prefixes(string: str) -> List[str]:
    return [string[: i + 1] for i in range(len(string)]

# Read input from user
input_string = input("Enter a string: ")

# Call the function with the input provided
result = all_prefixes(input_string)
print(result)