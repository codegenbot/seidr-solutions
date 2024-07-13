import re


def fix_spaces(text):
    while True:
        try:
            text = input("Enter a string: ")
            break
        except ValueError:
            print("Invalid input. Please enter a string.")

    if not text:
        return ""

    text = text.strip().lower()
    text = re.sub(r"\s+", "_", text)
    while "--" in text:
        text = text.replace("--", "-")
    while "_-_" in text or "_--" in text:
        text = text.replace("_--", "_-").replace("_-", "_-")
    return text.upper() if text.isalpha() else text.capitalize()