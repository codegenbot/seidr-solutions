from typing import List

def filter_by_substring() -> List[str]:
    strings = input("Enter a list of strings: ").split()
    substring = input("Enter the substring to filter by: ")
    return [s for s in strings if substring in s]