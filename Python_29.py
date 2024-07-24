```
from typing import List

def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    return [s for s in strings if s.startswith(prefix)]

strings = input("Enter a list of strings (comma-separated): ")
prefix = input("Enter the prefix to filter by: ")

while True:
    try:
        strings_list = [string.strip() for string in strings.split(",")]
        break
    except ValueError:
        print("Invalid input. Please enter comma-separated strings.")
        
while True:
    if prefix.isalpha():
        break
    else:
        print("Invalid prefix. Please enter a string without special characters.")

print(filter_by_prefix(strings_list, prefix))