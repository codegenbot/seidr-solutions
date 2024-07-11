from typing import Optional


def longest(strings: list) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)


strings = []
num_strings = int(input("How many strings do you want to enter? "))
for _ in range(num_strings):
    s = input("Enter a string (or 'stop' to finish): ")
    while s != 'stop':
        strings.append(s)
        s = input("Enter a string (or 'stop' to finish): ")
print(longest(strings))