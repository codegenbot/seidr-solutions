from typing import List, Optional


def longest(strings: List[Optional[str]]) -> Optional[List[str]]:
    if not strings:
        return []

    max_len = 0
    result = []
    for s in strings:
        if s is not None and isinstance(s, str):
            if len(s) > max_len:
                max_len = len(s)
                result = [s]
            elif len(s) == max_len:
                result.append(s)

    return result


strings = []

while True:
    user_input = input("Enter a string (or 'stop' to finish): ")
    if user_input.lower() == "stop":
        break
    elif not isinstance(user_input, str) or len(user_input.strip()) == 0:
        print("Invalid input. Please enter a non-empty string.")
    else:
        strings.append(user_input)

print(longest([s for s in strings if s is not None]))