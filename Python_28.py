from typing import List


def concatenate() -> str:
    user_input = input("Enter your text: ")
    result = ""
    for string in user_input.split(","):
        if len(string.strip()) > 0:
            result += string.strip()
    return result