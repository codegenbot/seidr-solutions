from typing import List


def all_prefixes(string: str) -> List[str]:
    prefixes = []
    words = string.split(" ")
    for word in words:
        for i in range(1, len(word) + 1):
            prefixes.append(word[:i])
    return prefixes


input_string = input()
result = all_prefixes(input_string)
print(result)