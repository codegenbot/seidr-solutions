from typing import List


def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [s for s in strings if substring in s]


user_strings = input("Enter a list of strings (space separated): ").split()
user_substring = input("Enter the substring to search for: ")

try:
    if not all(isinstance(s, str) for s in user_strings):
        raise ValueError("All elements in the list must be strings.")
    if not isinstance(user_substring, str):
        raise ValueError("The substring must be a string.")

    result = filter_by_substring(user_strings, user_substring)
    print(result)

except ValueError as e:
    print(f"Error: {e}")