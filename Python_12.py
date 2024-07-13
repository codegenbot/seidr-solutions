```
# This line will be ignored
# And neither will this one

from typing import List, Optional


def longest(strings: List[Optional[str]]) -> Optional[str]:
    max_len = 0
    result = None
    for s in strings:
        if s is not None and len(s) > max_len:
            max_len = len(s)
            result = s
    return result

strings = []
while True:
    user_input = input("Enter a string (or 'stop' to finish): ")
    if user_input.lower() == 'stop':
        break
    strings.append(user_input)

print(longest(strings))