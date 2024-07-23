```
from typing import List

def filter_by_substring(strings: list, substring: str) -> list:
    return [s for s in strings if substring.lower() in s.lower()]

while True:
    try:
        strings_list = [x.strip() for x in input("Enter a list of strings (separated by commas): ").split(',')]
        if all(strings_list):
            break
        print("Invalid input. Please enter a list of strings separated by commas.")
strings = strings_list

while True:
    try:
        substring = input("Enter a substring to search for: ").strip()
        if substring:
            break
        print("Please enter a non-empty string as the substring to search for.")
    except ValueError:
        print("Please enter a non-empty string as the substring to search for.")

result = filter_by_substring(strings, substring)
print(result)