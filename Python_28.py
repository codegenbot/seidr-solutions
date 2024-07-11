from typing import List


def concatenate(strings: List[str]) -> str:
    if isinstance(strings, list):
        return "".join(strings)
    elif isinstance(strings, str):
        return strings
    else:
        return "Error: Expected a list of strings"


if __name__ == "__main__":
    input_str = input("Enter the strings (comma separated): ")
    user_input_list = [s.strip() for s in input_str.split(",")]
    while True:
        if all(isinstance(s, str) for s in user_input_list):
            break
        else:
            print("Invalid input. Please enter a list of strings.")
            input_str = input("Enter the strings (comma separated): ")
            user_input_list = [s.strip() for s in input_str.split(",")]
    print(concatenate(user_input_list))