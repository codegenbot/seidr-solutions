from typing import List


def all_prefixes(string: str) -> List[str]:
    return [""] + [string[:i].lower() for i in range(1, len(string) + 1)]


print(all_prefixes(input("Enter a string: ").lower()))
print(all_prefixes(input("Enter a string: ").upper()))