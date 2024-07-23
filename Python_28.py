from typing import List


def concatenate(strings: List[str]) -> str:
    if not strings:
        return ""
    result = ""
    for string in strings:
        result += string
    return result


if __name__ == "__main__":
    strings = input("Enter multiple strings (comma separated): ").split(", ")
    print(concatenate(strings))