import re


def fix_spaces(text):
    pattern = r"\s+"
    replacement = "_"
    
    text = input("Enter a text: ")  # Get user input
    text = re.sub(pattern, replacement, text)
    return text