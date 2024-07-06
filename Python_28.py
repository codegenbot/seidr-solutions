from typing import List

def concatenate(strings: List[str]) -> str:
    while True:
        user_input = input("Enter a string (or 'stop' to finish): ")
        if user_input.lower() == 'stop':
            break
        strings.append(user_input)
    return ''.join(strings)