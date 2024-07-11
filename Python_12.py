```
from typing import List, Optional


def longest(strings: List[str]) -> Optional[List[str]]:
    if not strings:
        return None

    strings.sort(key=len)
    max_len = len(strings[-1])
    results = [strings[0]]

    for s in strings[1:]:
        if len(s) == max_len:
            results.append(s)
        elif len(s) > max_len:
            break

    return results


user_input = input("Please enter a list of strings (comma-separated): ")
strings = [s.strip() for s in user_input.split(",")]

print(longest(strings))