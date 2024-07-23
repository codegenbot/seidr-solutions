from typing import Optional


def longest(strings: list[str]) -> Optional[str]:
    if not strings:
        return None
    max_len = 0
    longest_str = None
    for s in strings:
        if len(s) > max_len:
            max_len = len(s)
            longest_str = s
    return longest_str


strings = input("Please enter a list of strings (comma-separated): ").split(",")
print("The longest string is: " + longest(strings)[0])