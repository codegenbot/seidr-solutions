from typing import List
import re


def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    if not substring:
        return []

    pattern = re.compile(substring)

    return [s for s in strings if bool(pattern.search(s))]


if __name__ == "__main__":
    strings_input = input("Please enter a list of strings separated by commas: ")
    substring_input = input("Please enter the substring to filter by: ")

    strings_list = [s.strip() for s in strings_input.split(",")]
    filtered_strings = filter_by_substring(strings_list, substring_input)

    print("Filtered strings: ", filtered_strings)