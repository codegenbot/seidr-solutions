from typing import List

def all_prefixes(string: str) -> List[str]:
    return [string[:i + 1] for i in range(len(string)]

# Read input from user
input_string = input("Enter a string: ")

# Call the function and print the list of prefixes
print(all_prefixes(input_string))