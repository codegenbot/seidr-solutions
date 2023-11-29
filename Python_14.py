from typing import List

def all_prefixes(string: str) -> List[str]:
    prefixes = []
    for i in range(1, len(string) + 1):
        prefixes.append(string[:i])
    return prefixes

# Read input from user
string = input("Enter a string: ")

# Call the function with the user input
result = all_prefixes(string)

# Print the result
print(result)