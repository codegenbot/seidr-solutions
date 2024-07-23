```
from typing import List


def all_prefixes(string: str) -> List[str]:
    return [""] + [string[:i].lower() for i in range(1, len(string) + 1)]


str_input = input("Enter a string: ")

print(all_prefixes(str_input.lower()))
print(all_prefixes(str_input.upper()))