from typing import List


def filter_by_prefix() -> List[str]:
    strings = input("Enter a list of strings (space separated): ")
    prefix = input("Enter the prefix: ")

    try:
        string_list = [s.strip() for s in strings.split()]
        result = [s for s in string_list if s.startswith(prefix)]
        return result
    except ValueError:
        return ["Invalid input. Please provide a list of strings and a valid prefix."]