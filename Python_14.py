from typing import List

def all_prefixes(string: str) -> List[str]:
    prefixes = []
    for i in range(1, len(string) + 1):
        prefixes.append(string[:i])
    return prefixes

# Read input from user
input_string = input('Enter a string:')
# Call the function with the input string
result = all_prefixes(input_string)
# Print the result
print(result)