```
from typing import List

def filter_by_substring(strings: list, substring: str) -> list:
    return [s for s in strings if substring.lower() in s.lower()]

while True:
    try:
        strings_list = input("Enter a list of strings (separated by commas): ").strip().split(',')
        strings = [x.strip() for x in strings_list]
        while '' in strings:
            strings.remove('')
        break
    except ValueError:
        print("Invalid input. Please enter a list of strings separated by commas.")

while True:
    try:
        substring = input("Enter a substring to search for: ")
        break
    except ValueError:
        print("Invalid input. Please enter a valid substring.")

result = filter_by_substring(strings, substring)
print(result)