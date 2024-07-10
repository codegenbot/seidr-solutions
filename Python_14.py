from typing import List

def all_prefixes(string: str) -> List[str]:
    return [string[: i + 1] for i in range(len(string))]

# Get user input
input_string = input("Enter a string: ")

# Call the function and print the result
print(all_prefixes(input_string))