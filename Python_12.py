from typing import List, Optional


def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)


# Get input from the user
user_input = input("Please enter a list of strings separated by commas: ")

# Split the input into a list of strings and pass it to your function
print(longest(user_input.split(",")))