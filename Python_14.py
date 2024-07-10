from typing import list

def all_prefixes() -> list:
    string = input("Enter a string: ")
    return [string[:i] for i in range(1, len(string) + 1)]