from typing import List


def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    return [s for s in strings if s.startswith(prefix)]


# Read user input
user_input = input("Enter a list of strings (comma-separated): ")
strings = [string.strip() for string in user_input.split(',')]

# Ask for the prefix
prefix = input("Enter the prefix: ")

# Call your function with the user's inputs and print the result
print(filter_by_prefix(strings, prefix))