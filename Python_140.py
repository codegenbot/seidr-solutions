import re


def fix_spaces():
    while True:
        text = input("Enter a string (or 'stop' to finish): ").strip().lower()
        if text.lower() == "stop":
            break
        elif not text.isalpha():
            print("Please enter alphabetic characters only. Try again.")
        else:
            text = re.sub(r"\s+", "_", text)
            while "--" in text:
                text = text.replace("--", "-")
            while "_-_" in text or "_--" in text:
                text = text.replace("_--", "_-").replace("_-_", "_-")
            print(text.upper() if text.isalpha() else text.capitalize())


fix_spaces()