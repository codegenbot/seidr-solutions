```Python
import re


def fix_spaces(text):
    text = re.sub(r"\s+", "_", text)
    text = text.strip("_")
    if not text:
        return "N/A"
    return text


while True:
    try:
        text = input("Enter a text: ")
        result = fix_spaces(text)
        print(result)
        break
    except (ValueError, EOFError):
        print("Please enter valid input. Try again!")