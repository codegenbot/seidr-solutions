from typing import List

def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [string for string in strings if substring in string]

# Read input from the user
strings = input().split()
substring = input()

# Call the function and print the result
result = filter_by_substring(strings, substring)
print(result)