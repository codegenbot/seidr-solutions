from typing import List


def concatenate() -> str:
    inputs = input("Please provide some strings (separated by spaces or commas): ")
    inputs_list = inputs.split()
    return "".join(map(str, inputs_list))