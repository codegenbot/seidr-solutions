from typing import List

def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [string for string in strings if substring in string]

strings_input = input("Enter a list of strings (separated by space): ").split()
substring = input("Enter a substring: ").strip()

if not strings_input or not substring:
    print("Incorrect input. Please provide both a list of strings and a substring.")
else:
    result = filter_by_substring(strings_input, substring)
    if result:
        print(f"{result}")
    else:
        print(f"No strings contain the substring '{substring}'.")