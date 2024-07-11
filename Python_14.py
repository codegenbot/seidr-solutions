from typing import List


def all_prefixes() -> None:
    while True:
        string = input("Enter your string (or 'stop' to finish): ")
        if string.lower() == "stop":
            break
        print([string[:i] for i in range(1, len(string) + 1)])