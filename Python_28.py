from typing import List

def concatenate(strings: List[str]) -> str:
    result = ''
    while True:
        user_input = input("Enter the strings separated by spaces (or 'q' to quit): ")
        if user_input.lower() == 'q':
            return result
        user_strings = user_input.split()
        for s in user_strings:
            if s.strip():
                result += s + ' '
    return result.rstrip()