import re


def fix_spaces(text):
    # Read input from user
    text = input("Enter a string: ")
    # Return the corrected output
    return re.sub(r"\s+", "-", text)