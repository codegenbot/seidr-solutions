from typing import List

def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [string for string in strings if substring in string]

strings = []
while True:
    line = input()
    if not line:
        break
    strings.append(line)

substring = input()
result = filter_by_substring(strings, substring)
print(result)