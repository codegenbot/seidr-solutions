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
        elif s == 'stop':
            break
    return longest_str


strings = [s.strip() for s in input("Please enter a list of strings, one per line (or 'stop' to finish): ").split()]
print("The longest string is: " + str(longest(strings)) if longest(strings) else "No strings entered")