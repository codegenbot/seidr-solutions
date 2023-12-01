from typing import List

def all_prefixes(string: str) -> List[str]:
    prefixes = []
    for i in range(1, len(string) + 1):
        prefixes.append(string[:i])
    return prefixes

# Read input from the user
input_string = input()

# Call the function with the input
result = all_prefixes(input_string)

# Print the result
print(result)