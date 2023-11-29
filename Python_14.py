from typing import List


def all_prefixes(string: str) -> List[str]:
    prefixes = []
    words = string.split()
    for word in words:
        prefixes.append(word)
    return prefixes


input_string = input()
result = all_prefixes(input_string)
print(result)