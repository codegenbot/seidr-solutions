from typing import List

def concatenate() -> str:
    user_input = input("Enter words separated by space: ")
    if not user_input:
        return ""
    words = user_input.split()
    result = ''.join(words)
    return result

print(concatenate())