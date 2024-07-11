from typing import List

def all_prefixes() -> List[str]:
    string = input("Enter a string: ")
    prefixes = [""]
    for i in range(len(string)):
        prefix = string[:i+1]
        if len(prefix) > 0:
            prefixes.append(prefix)
    return prefixes