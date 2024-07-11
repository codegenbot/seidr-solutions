```
from typing import Optional


def longest(strings: list) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)


num_strings = int(input("How many strings do you want to enter? "))
strings = []
for _ in range(num_strings):
    while True:
        user_input = input("Enter a string (or 'stop' to finish): ")
        if user_input.lower() == 'stop':
            break
        strings.append(user_input)
longest_string = longest(strings)
print(f"Longest string: {longest_string}")