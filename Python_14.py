from typing import List


def all_prefixes() -> None:
    s = input("Please enter a string: ")
    if not s:
        print("Error: Please provide valid input.")
    else:
        print([s[: i + 1] for i in range(len(s))])