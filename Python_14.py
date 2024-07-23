```
from typing import List


def all_prefixes(string: str) -> List[str]:
    return ["" + string[:i].lower() for i in range(1, len(string) + 1)]


string1 = input("Enter a string (lowercase): ")
print(all_prefixes(string1.lower()))

string2 = input("Enter a string (uppercase): ")
print(all_prefixes(string2.upper()))