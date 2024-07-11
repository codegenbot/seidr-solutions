from typing import Optional


def longest(strings: list) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)


strings = []
for i in range(int(input("How many strings do you want to enter? "))):
    s = input("Enter a string (or 'stop' to finish): ")
    if s.lower() == 'stop':
        break
    strings.append(s)
longest_string = longest(strings)
print(longest_string)