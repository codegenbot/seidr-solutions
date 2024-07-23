```
from typing import List

def filter_by_substring(strings: list, substring: str) -> list:
    return [s for s in strings if substring in s]

strings = input("Enter a list of strings (separated by commas): ")
while len(strings.split(',')) < 2 or any(x.strip() == '' for x in strings.split(',')):
    print("Invalid input. Please enter a list of strings separated by commas.")
    strings = input("Enter a list of strings (separated by commas): ")

substring = input("Enter a substring to search for: ")
while substring.strip() == "":
    print("Please enter a non-empty string as the substring to search for.")
    substring = input("Enter a substring to search for: ")

result = filter_by_substring([s.strip() for s in strings.split(',')], substring)
print(result)