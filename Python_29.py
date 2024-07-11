from typing import List

def filter_by_prefix() -> None:
    strings = input("Enter the list of strings (space-separated): ")
    prefix = input("Enter the prefix: ")

    if isinstance(prefix, str):
        result = [s for s in strings.split() if s.startswith(prefix)]
        print(f"Result: {result}")
    else:
        print("Invalid prefix. Please enter a string.")