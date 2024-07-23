```
from typing import List

def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    if not strings:
        return []
    if not substring:
        return strings
    return [s for s in strings if substring.lower() in s.lower()]

strings_list = input("Enter a list of strings (separated by commas): ").split(',')
strings = [x.strip() for x in strings_list]

while '' in strings:
    strings.remove('')

substring = input("Enter a substring to search for: ")

result = filter_by_substring(strings, substring)
print(result)