from typing import List


def concatenate(strings: List[str]) -> str:
    result = ""
    for s in strings:
        if s.strip():
            result += s + " "
    return result.rstrip()


if __name__ == "__main__":
    user_strings = input(
        "Enter the strings separated by spaces (or 'q' to quit): "
    ).split()
    while True:
        print(concatenate(user_strings))
        user_input = input("Enter the strings separated by spaces (or 'q' to quit): ")
        if user_input.lower() == "q":
            break
        user_strings = user_input.split()