from typing import List


def concatenate(strings: List[str]) -> str:
    return "".join(strings)


if __name__ == "__main__":
    user_input = input("Enter a series of space-separated strings: ")
    user_strings = user_input.split()
    print(concatenate(user_strings))