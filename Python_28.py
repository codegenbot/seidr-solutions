from typing import List


def concatenate(strings: List[str]) -> str:
    if not strings:
        return ""
    input_list = input("Please enter a list of strings (comma separated): ")
    input_list = [i.strip() for i in input_list.split(",")]
    return "".join(input_list)