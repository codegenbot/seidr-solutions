from typing import List

def all_prefixes(string: str) -> List[str]:
    return [string[:i+1] for i in range(len(string))]

# Replace the input() statement with a test input for debugging and testing purposes
string = "example"
prefixes = all_prefixes(string)
print(prefixes)