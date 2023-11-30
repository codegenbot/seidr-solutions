from typing import List

def all_prefixes(strings: List[str]) -> List[str]:
    prefixes = []
    for string in strings:
        for i in range(len(string)):
            prefixes.append(string[: i + 1])
    return prefixes

strings_list = input().split()
prefixes_list = all_prefixes(strings_list)
print(prefixes_list)