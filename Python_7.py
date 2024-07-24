```Python
from typing import List


def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [s for s in strings if substring in s]


user_strings = input("Enter a list of strings (space separated): ").split()
user_substrings = []

while True:
    user_substring = input("Enter the substring to search for ('q' to quit): ")
    
    if user_substring.lower() == 'q':
        break
    try:
        if isinstance(user_substring, str):
            user_substrings.append(user_substring)
        else:
            print("Invalid input. Please enter a string.")
    except Exception as e:
        print(f"Error: {str(e)}")

if user_strings and user_substrings:
    result = filter_by_substring(user_strings, user_substrings[0])
else:
    result = []

print(result)