```
from typing import List


def concatenate(strings: List[str]) -> str:
    if isinstance(strings, list):
        return "".join(strings)
    elif strings:
        return str(strings)
    else:
        return "Error: Expected a list of strings"


if __name__ == "__main__":
    print("Enter the strings (comma separated): ", end="")
    strings = input()
    input_list = [s.strip() for s in strings.split(",")]
    print(concatenate(input_list))