from typing import List


def filter_by_prefix() -> None:
    strings = input("Enter a list of strings separated by space: ").split()
    prefix = input("Enter the prefix: ")

    def check_input(s):
        if s.strip().isalpha():
            return True
        else:
            return False

    filtered_strings = [s for s in strings if s.startswith(prefix) and check_input(s)]

    print(f"The filtered strings are: {filtered_strings}")


filter_by_prefix()