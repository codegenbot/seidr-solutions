import re


def fix_spaces():
    while True:
        text = input("Enter a string (or 'stop' to finish): ").strip().lower()
        if text.lower() == "stop":
            break
        elif not re.match("^[a-z_]+$", text):
            print("Please enter alphabetic characters and/or underscores. Try again.")
        else:
            text_list = text.split()
            new_text = "_".join(text_list)
            while "--" in new_text:
                new_text = new_text.replace("--", "-")
            while "_-_" in new_text or "_--" in new_text:
                new_text = new_text.replace("_--", "_-").replace("_-_", "_-")
            print(f"{new_text.upper() if new_text.isalpha() else new_text.capitalize()}")