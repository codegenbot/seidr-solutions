```
from typing import List


def filter_by_prefix(List[str]): List[str]) -> None:
    input_str = input("Enter a list of strings (one per line), separate them with '%%': ")
    prefix = input("Enter the prefix: ")

    try:
        string_list = [s.strip() for s in input_str.split('%%')]
        result = [s for s in string_list if s.startswith(prefix)]
        print(result)
    except ValueError:
        print("Invalid input. Please provide a list of strings and a valid prefix.")