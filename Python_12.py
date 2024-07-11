```
from typing import Optional


def longest(strings: list) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)


strings = [input("Enter a string (or 'stop' to finish): ") for _ in range(int(input("How many strings do you want to enter? "))) if input != 'stop']
longest_string = longest(strings)
print(longest_string)