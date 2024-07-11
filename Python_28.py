from typing import List


def concatenate():
    strings = input("Please provide some strings (separated by spaces): ").split()
    if not strings:
        return "Please provide some strings"
    return ' '.join(strings)