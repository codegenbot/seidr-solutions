from typing import List

def all_prefixes() -> List[str]:
    string = input().strip()
    prefixes = []
    if string:
        for i in range(len(string)):
            prefixes.append(string[: i + 1])
    return prefixes

prefixes_list = all_prefixes()
print(prefixes_list)