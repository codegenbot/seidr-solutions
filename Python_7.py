from typing import List

def filter_by_substring(strings: list, substring: str) -> list:
    return [s for s in strings if substring in s]

strings = input("Enter a list of strings (separated by commas): ").split(",")
substring = input("Enter a substring to search for: ")

while "" in strings:
    strings.remove("")
strings = [s for s in strings if type(s) == str]

result = filter_by_substring([s.strip() for s in strings], substring)
print(result)