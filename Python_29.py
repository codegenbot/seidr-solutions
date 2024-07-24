```
from typing import List

def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    return [s for s in strings if s.startswith(prefix)]

strings = input("Enter a list of strings (comma-separated): ")
prefix = input("Enter the prefix to filter by: ")

try:
    strings_list = [string.strip() for string in strings.split(",")]
except ValueError:
    print("Invalid input. Please enter a list of comma-separated strings.")
else:
    if not strings_list:
        print("No strings provided.")
    elif not prefix:
        print("Prefix cannot be empty.")
    else:
        print(filter_by_prefix(strings_list, prefix))