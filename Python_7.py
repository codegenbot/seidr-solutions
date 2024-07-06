```
from typing import list

def filter_by_substring(strings: list, substring: str) -> list:
    return [s for s in strings if substring in s]

if __name__ == "__main__":
    while True:
        try:
            strings = input("Enter a list of strings (space separated): ").split()
            break
        except AttributeError:
            print("Invalid input. Please enter only strings.")
    
    while True:
        try:
            substring = input("Enter a substring to search: ")
            break
        except AttributeError:
            print("Invalid input. Please enter only strings.")
    
    result = filter_by_substring(strings, substring)
    print(result)