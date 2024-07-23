```
from typing import List

def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [s for s in strings if substring in s]

strings = input("Enter a list of strings (separated by commas): ").split(",")
while "" in strings:
    strings.remove("")
strings = [s for s in strings if type(s) == str]
while not all(isinstance(x, str) for x in strings):
    print("Invalid input. Please enter only strings.")
    strings = input("Enter a list of strings (separated by commas): ").split(",")
    while "" in strings:
        strings.remove("")
    strings = [s for s in strings if type(s) == str]

substring = input("Enter a substring to search for: ")
while substring.strip() == "":
    print("Please enter a non-empty string as the substring to search for.")
    substring = input("Enter a substring to search for: ")

result = filter_by_substring([s.strip() for s in strings], substring)
print(result)