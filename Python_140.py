import re


def fix_spaces(text):
    while True:
        print("Enter a string: ")
        text = input().strip().lower()
        if not text.isalpha():
            continue
        else:
            break

    text = re.sub(r"\s+", "_", text)
    while "--" in text:
        text = text.replace("--", "-")
    while "_-_" in text or "_--" in text:
        text = text.replace("_--", "_-").replace("_-_", "_-")
    return text.upper() if text.isalpha() else text.capitalize()