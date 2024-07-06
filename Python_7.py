```
from typing import list

def filter_by_substring(strings: list, substring: str) -> list:
    return [s for s in strings if substring in s]

if __name__ == "__main__":
    strings = input("Enter a list of strings (space separated): ").split()
    if not strings:  
        print("No strings entered. Please try again.")
    else:
        while True:
            substring = input("Enter a substring to search: ")
            if substring:  # Check for empty or None
                break
            print("Please enter a valid substring. Try again!")
        result = filter_by_substring(strings, substring)
        print(result)