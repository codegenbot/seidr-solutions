```
from typing import List

def filter_by_substring(strings: list, substring: str) -> list:
    return [s for s in strings if substring in s]

while True:
    try:
        strings = input("Enter a list of strings (separated by commas): ").split(",")
        while "" in strings:
            strings.remove("")
        strings = [s for s in strings if type(s) == str]
        while not all(isinstance(x, str) for x in strings):
            print("Invalid input. Please enter only strings.")
            strings = input("Enter a list of strings (separated by commas): ").split(",")
        break
    except ValueError:
        print("Invalid input. Please enter valid data.")

while True:
    try:
        substring = input("Enter a substring to search for: ")
        if substring.strip() == "":
            print("Please enter a non-empty string as the substring to search for.")
        else:
            break
    except ValueError:
        print("Invalid input. Please enter valid data.")

result = filter_by_substring([s.strip() for s in strings], substring)
print(result)