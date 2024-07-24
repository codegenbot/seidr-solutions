from typing import List

def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    return [s for s in strings if s.startswith(prefix)]

strings = input("Enter a list of strings (comma-separated): ")
prefix = input("Enter the prefix to filter by: ")

input_list = [string.strip() for string in strings.split(",")]
print(filter_by_prefix(input_list, prefix))