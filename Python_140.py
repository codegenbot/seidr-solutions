```
import re


def fix_spaces():
    pattern = r"\s+"
    replacement = "_"

    while True:
        text = input("Enter a text: ")
        if re.match(r"^[a-zA-Z0-9_]+$", text):
            break
        print("Invalid input. Please enter only alphanumeric characters and spaces.")
    
    text = re.sub(pattern, replacement, text)
    return text