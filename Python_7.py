from typing import List

def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [s for s in strings if substring in s]

strings = input("Enter strings (comma-separated): ")
list_of_strings = [i.strip() for i in strings.split(",")]
substring = input("Enter the substring to search: ")

print(filter_by_substring(list_of_strings, substring))