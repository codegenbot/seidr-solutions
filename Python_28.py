from typing import List


def concatenate():
    user_input = input("Please provide some strings (separated by spaces): ")
    strings = user_input.split()
    if not strings:
        return "Please provide some strings"
    return "".join(strings)