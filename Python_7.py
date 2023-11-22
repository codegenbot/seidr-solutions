import sys
from typing import List

def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [string for string in strings if substring in string]

strings_input = sys.stdin.readline().strip().split()
substring = sys.stdin.readline().strip()

if not strings_input or not substring:
    print("Incorrect input. Please provide both a list of strings and a substring.")
else:
    result = filter_by_substring(strings_input, substring)
    if result:
        print(f"The strings that contain '{substring}' are: {result}")
    else:
        print(f"No strings contain the substring '{substring}'.")