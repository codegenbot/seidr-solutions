from typing import List


def concatenate(strings: List[str]) -> str:
    if not strings:
        return ""
    result = ""
    for s in strings:
        result += s
    return result


if __name__ == "__main__":
    user_strings = input("Enter some strings (separated by space): ").split()
    print(concatenate(user_strings))