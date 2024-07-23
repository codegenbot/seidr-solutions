```
from typing import List

def filter_by_substring(strings: list, substring: str) -> list:
    return [s for s in strings if substring in s]

strings = input("Enter a list of strings (separated by commas): ").split(",")
substring = input("Enter a substring to search for: ")

while "" in strings:
    strings.remove("")
    
if not all(isinstance(s, str) for s in strings):
    print("Invalid input. Please enter only strings.")
else:
    result = filter_by_substring([s.strip() for s in strings], substring)
    print(result)