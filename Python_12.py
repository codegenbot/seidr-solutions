from typing import Optional


def longest(strings: list) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)


strings = []
while True:
    input_str = input("Enter a string (or 'stop' to finish): ")
    if input_str.lower() == 'stop':
        break
    strings.append(input_str)
if not strings:
    print("No strings entered. Please enter at least one string.")
else:
    longest_string = longest(strings)
    print(longest_string)