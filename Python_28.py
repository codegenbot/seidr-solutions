from typing import List


def concatenate(strings: List[str]) -> str:
    if not isinstance(strings, list):
        return "Error: Input must be a list of strings."
    input_str = input("Enter comma-separated strings: ")
    strings_list = [s.strip() for s in input_str.split(",")]
    result = ""
    for s in strings_list:
        result += s
    return result