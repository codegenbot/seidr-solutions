from typing import List


def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    return [string for string in strings if string.startswith(prefix)]


def main(input_str: str, prefix: str) -> List[str]:
    strings = input_str.split()  # convert input string to list

    filtered_strings = filter_by_prefix(strings, prefix)
    return filtered_strings