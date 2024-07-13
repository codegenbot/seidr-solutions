```
from typing import List


def filter_by_prefix() -> None:
    strings = input("Enter a list of strings (space separated): ")
    prefix = input("Enter the prefix: ")

    try:
        string_list = [s.strip() for s in strings.split()]
        if len(prefix.split()) > 1:
            raise ValueError("Prefix should be a single word.")
        
        result = [s for s in string_list if s.startswith(prefix)]
        print(result)
    except ValueError:
        print("Invalid input. Please provide a list of strings and a valid prefix.")