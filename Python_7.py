from typing import list

def filter_by_substring() -> None:
    strings = input("Enter comma-separated strings: ").split(',')
    substring = input("Enter a substring to filter by: ")
    
    filtered_strings = [s.strip().lower() for s in strings if substring.lower() in s.strip().lower()]
    
    print(f"Strings containing the substring '{substring}': {filtered_strings}")

filter_by_substring()