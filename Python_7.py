```
from typing import List

def filter_by_substring(strings: list, substring: str) -> list:
    return [s for s in strings if substring.lower() in s.lower()]

strings_list = input("Enter a list of strings (separated by commas): ").split(',')
while len(strings_list) < 2 or any(x.strip() == '' for x in strings_list):
    print("Invalid input. Please enter a list of strings separated by commas.")
    strings_list = input("Enter a list of strings (separated by commas): ").split(',')
strings = [s.strip() for s in strings_list]

substring = input("Enter a substring to search for: ")
while substring.strip() == "":
    print("Please enter a non-empty string as the substring to search for.")
    substring = input("Enter a substring to search for: ")

result = filter_by_substring(strings, substring)
print(result)