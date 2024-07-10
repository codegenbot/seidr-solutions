```Python
from typing import List


def concatenate(strings: List[str]) -> str:
    if not strings:
        return ""
    result = ", ".join(map(str, strings))
    return result


if __name__ == "__main__":
    strings = []
    while True:
        user_input = input("Enter a string (or 'q' to quit): ")
        if user_input.lower() == 'q':
            break
        strings.append(user_input)
    print(concatenate(strings))