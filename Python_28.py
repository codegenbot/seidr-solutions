from typing import List


def concatenate(strings: List[str]) -> str:
    if isinstance(strings, list):
        return "".join(sorted(strings))
    elif isinstance(strings, str):
        return strings
    else:
        return "Error: Expected a list of strings"


if __name__ == "__main__":
    strings = input("Enter the strings: ")
    input_list = [s.strip() for s in strings.split()]
    while True:
        if all(isinstance(s, str) and len(s) > 0 for s in input_list):
            break
        else:
            print("Invalid input. Please enter a list of non-empty strings.")
            strings = input("Enter the strings: ")
            input_list = [s.strip() for s in strings.split()]
    print(concatenate(input_list))