from typing import List

def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [string for string in strings if substring in string]

strings = []
while True:
    string = input()
    if not string:
        break
    strings.append(string)

substring = input()
result = filter_by_substring(strings, substring)
print(result)