from typing import List


def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [s for s in strings if substring in s]


user_strings = input("Enter a list of strings (space separated): ").split()
user_substrings = []

while True:
    user_substring = input("Enter the substring to search for ('q' to quit): ")

    if user_substring.lower() == "q":
        break
    if not isinstance(user_substring, str):
        print("Please enter a string.")
        continue
    user_substrings.append(user_substring)

if not user_substrings:
    print("No substrings entered. Quitting.")
else:
    result = filter_by_substring(user_strings, user_substrings[0])
    print(result)