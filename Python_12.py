from typing import Optional

def longest(strings: list) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)


strings = []
while True:
    user_input = input("Enter a string (or 'stop' to finish): ")
    if user_input.lower() == 'stop':
        break
    strings.append(user_input)
longest_string = longest(strings)
print(longest_string)