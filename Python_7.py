```
from typing import List

def filter_by_substring(strings: list, substring: str) -> list:
    return [s for s in strings if substring.lower() in s.lower()]

input_str = input("Enter a list of strings (separated by commas or single-string per line): ")
if ',' in input_str:
    strings_list = [x.strip() for x in input_str.split(',')]
elif '\n' in input_str:  
    strings_list = [x.strip() for x in input_str.split('\n')]
else:
    strings_list = [input_str]  

substring = input("Enter a substring to search for: ")

result = filter_by_substring(strings_list, substring)
print(result)