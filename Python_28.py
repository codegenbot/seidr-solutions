```
from typing import List


def concatenate(strings: List[str]) -> str:
    if isinstance(strings, list):
        return "".join(sorted(strings))
    elif isinstance(strings, str):
        return strings
    else:
        return "Error: Expected a list of strings"


if __name__ == "__main__":
    strings = input("Enter the strings (comma separated): ")
    input_list = [s.strip() for s in strings.split(",")]
    while True:
        if any(not isinstance(s, str) for s in input_list):
            print("Invalid input. Please enter a list of strings.")
            strings = input("Enter the strings (comma separated): ")
            input_list = [s.strip() for s in strings.split(",")]
        else:
            break
    print(concatenate(input_list))