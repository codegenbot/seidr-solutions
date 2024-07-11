```
from typing import List


def concatenate(strings: List[str]) -> str:
    if not strings:
        return ""
    return "".join(s for s in strings if s)


# Prompt the user for input
user_input = input("Please enter some strings (comma-separated): ")

# Split the input into a list of strings
strings_list = [s.strip() for s in user_input.split(",")]

# Call your function with the list of strings as an argument
print(concatenate(strings_list))