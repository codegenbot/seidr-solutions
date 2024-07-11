from typing import List


def concatenate():
    num_strings = int(input("Enter the number of strings: "))
    strings = [input() for _ in range(num_strings)]
    return "".join(strings)