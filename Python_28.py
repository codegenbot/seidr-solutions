from typing import List

def concatenate(strings: List[str]) -> str:
    return ''.join(strings)

user_input = input("Enter a list of strings: ").split()
result = concatenate(user_input)
print("Concatenated string:", result)