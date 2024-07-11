from typing import List


def concatenate(strings: List[str]) -> str:
    if isinstance(strings, list):
        return "".join(strings)
    elif strings:
        split_strings = strings.strip().split(",", 1)
        input_list = [s.strip() for s in split_strings[0].split(",")]
        return concatenate(input_list)
    else:
        return "Error: Expected a list of strings"


if __name__ == "__main__":
    strings = input("Enter the strings (comma separated): ")
    while True:
        if all(isinstance(s, str) for s in strings.split(",")):
            break
        else:
            print("Invalid input. Please enter a list of strings.")
            strings = input("Enter the strings (comma separated): ")
    print(concatenate([s.strip() for s in strings.split(",")]))