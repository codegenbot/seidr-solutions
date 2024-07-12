from typing import List

def concatenate() -> str:
    strings = []
    while True:
        user_input = input("Enter a string (or 'done' to finish): ")
        if user_input.lower() == 'done':
            break
        try:
            strings.append(user_input)
        except ValueError:
            print("Invalid input. Please enter a string.")
    return ''.join(strings)

print(concatenate())