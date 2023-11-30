from typing import List

def all_prefixes(string: str) -> List[str]:
    prefixes = []
    if string:
        for i in range(len(string)):
            prefixes.append(string[: i + 1])
    return prefixes

input_string = input().strip()
prefixes_list = all_prefixes(input_string)
print(prefixes_list)