from typing import List


def concatenate(strings: List[str]) -> str:
    result = ""
    user_input = input("Enter the strings separated by spaces (or 'q' to quit): ")
    while user_input.lower() != "q":
        user_strings = user_input.split()
        for s in user_strings:
            if s.strip():
                result += s + " "
        print(result.rstrip())
        user_input = input("Enter the strings separated by spaces (or 'q' to quit): ")
    return result