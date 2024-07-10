from typing import List


def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [s for s in strings if substring in s]


if __name__ == "__main__":
    user_input = input("Enter a list of strings separated by commas: ")
    strings = [s.strip() for s in user_input.split(",")]
    substring = input("Enter the substring to filter by: ")

    result = filter_by_substring(strings, substring)
    print(result)