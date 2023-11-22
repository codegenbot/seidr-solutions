from typing import List

def all_prefixes(string: str) -> List[str]:
    return [string[:i+1] for i in range(len(string))]

# Read input from the user
string = input()

# Call the function and print the result
result = all_prefixes(string)
print(result)