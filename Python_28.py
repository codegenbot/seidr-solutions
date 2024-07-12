from typing import List

def concatenate() -> str:
    strings = []
    while True:
        user_input = input("Enter a string (or 'done' to finish): ")
        if user_input.lower() == 'done':
            break
        strings.append(user_input)
    return ''.join(strings)

print(concatenate())