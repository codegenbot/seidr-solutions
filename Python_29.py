```
from typing import List


def filter_by_prefix() -> None:
    input_str = ''
    while True:
        s = input("Enter a list of strings (one per line), separate them with '%%': ")
        if s.lower() == '%%':
            break
        input_str += s + '%%'
    prefix = input("Enter the prefix: ")

    try:
        string_list = [s.strip() for s in input_str.split('%%')]
        result = [s for s in string_list if s.startswith(prefix)]
        print(result)
    except ValueError:
        print("Invalid input. Please provide a list of strings and a valid prefix.")