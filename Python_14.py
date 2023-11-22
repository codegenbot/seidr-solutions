from typing import List

def all_prefixes(string: str) -> List[str]:
    prefixes = []
    for i in range(len(string)):
        prefixes.append(string[:i+1])
    return prefixes

# Read input string from user
string = input().strip()

# Get all prefixes
prefixes = all_prefixes(string)

# Print the prefixes
print(prefixes)