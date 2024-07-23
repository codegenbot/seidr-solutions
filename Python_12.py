from typing import Optional, list


def longest(strings: list[str]) -> Optional[str]:
    if not strings:
        return None

    def is_printable(s: str) -> bool:
        return all(32 <= ord(c) < 127 for c in s)

    while True:
        user_input = input("Please enter a list of strings separated by comma: ")
        try:
            strings = [s.strip() for s in user_input.split(',')]
            break
        except ValueError:
            print("Invalid input. Please try again.")
    
    return max((s for s in strings if is_printable(s)), key=len)