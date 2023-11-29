from typing import List


def all_prefixes(strings: List[str]) -> List[str]:
    prefixes = []
    for string in strings:
        words = string.split()
        for word in words:
            for i in range(1, len(word) + 1):
                prefixes.append(word[:i])
    return prefixes


input_strings = input().split(",")
result = all_prefixes(input_strings)
print(result)