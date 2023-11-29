from typing import List


def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [string for string in strings if substring in string]


strings = []
num_of_strings = int(input())
for _ in range(num_of_strings):
    strings.append(input())

substring = input()
result = filter_by_substring(strings, substring)
print(result)