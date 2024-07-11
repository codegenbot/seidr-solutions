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
    while True:
        user_input = input("Enter the strings (comma separated): ")
        input_list = [s.strip() for s in user_input.split(",")]
        if all(isinstance(s, str) for s in input_list):
            break
        else:
            print("Invalid input. Please enter a list of strings.")
    print(concatenate(input_list))