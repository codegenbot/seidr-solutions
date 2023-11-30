from typing import List

def all_prefixes(string: str) -> List[str]:
    prefixes = []
    for i in range(1, len(string) + 1):
        prefixes.append(string[:i])
    return prefixes

# Read input from user
user_input = input("Enter a string: ")

# Call the function and print the result
print(all_prefixes(user_input))