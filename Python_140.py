```
import re

def fix_spaces(text):
    pattern = r"\s+"
    replacement = "_"

    text = re.sub(pattern, replacement, text)
    return text

while True:
    try:
        text = input("Enter a text: ")
        print(fix_spaces(text))
        break
    except ValueError:
        print("Invalid input. Please enter some text.")