```Python
from typing import List


def filter_by_substring() -> None:
    strings = input("Enter space-separated strings: ")
    substring = input("Enter the substring to search: ")

    string_list = [s.strip() for s in strings.split()]
    
    result = [s for s in string_list if substring in s]
    
    print(f"Strings containing '{substring}': {result}")


filter_by_substring()