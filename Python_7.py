```
from typing import list

def filter_by_substring(strings: list, substring: str) -> list:
    return [s for s in strings if substring in s]

if __name__ == "__main__":
    user_input = input("Enter a list of strings (comma-separated): ")
    strings = [x.strip() for x in user_input.split(",")]
    substring = input("Enter the substring to filter: ")
    result = filter_by_substring(strings, substring)
    print(result)