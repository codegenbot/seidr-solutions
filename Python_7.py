from typing import List

def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [s for s in strings if substring in s]

# Prompt the user to enter the input
strings = input("Enter a list of strings (separated by space): ").split()
substring = input("Enter the substring to filter by: ")

# Call the function and print the result
result = filter_by_substring(strings, substring)
print(result)