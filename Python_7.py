from typing import List


def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [s for s in strings if substring in s]


num_strings = int(input())
strings = []
for _ in range(num_strings):
    strings.append(input())

substring = input()
result = filter_by_substring(strings, substring)
print(result)