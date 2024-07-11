from typing import List

def all_prefixes() -> List[str]:
    string = input("Enter a string: ")
    return [string[:i] for i in range(1, len(string) + 1)]