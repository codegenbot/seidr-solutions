from typing import List


def all_prefixes() -> None:
    while True:
        string = input("Enter your string: ")
        if "quit" in string.lower():
            break
        print([string[:i] for i in range(1, len(string) + 1)])