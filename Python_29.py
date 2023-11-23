from typing import List

def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    return sorted({string for string in strings if string.startswith(prefix)})


n = int(input())
strings = []
for i in range(n):
    string = input()
    strings.append(string)
prefix = input()

filtered_strings = filter_by_prefix(strings, prefix)

print(filtered_strings)