```
from typing import List

def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [s for s in strings if substring.lower() in s.lower()]

strings_list = input("Enter a list of strings (separated by commas): ").strip().split(',')
while not all(strings_list):
    print("Invalid input. Please enter a list of strings separated by commas.")
    strings_list = input("Enter a list of strings (separated by commas): ").strip().split(',')

substring = input("Enter a substring to search for: ")
while not substring:
    print("Please enter a non-empty string as the substring to search for.")
    substring = input("Enter a substring to search for: ")

result = filter_by_substring(strings_list, substring)
print(result)