```
from typing import List

def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [s for s in strings if substring.lower() in s.lower()]

input_str = input("Enter a list of strings (separated by commas or single-string per line): ")
if ',' in input_str:
    strings_list = [x.strip() for x in input_str.split(',')]
else:
    strings_list = [x.strip() for x in input_str.split('\n')]

strings = [s for s in strings_list if s]
substring = input("Enter a substring to search for: ")

result = filter_by_substring(strings_list, substring)  
print(result)