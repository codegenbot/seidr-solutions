```
import re


def fix_spaces():
    while True:
        text = input("Enter a string (or 'stop' to finish): ").strip().lower()
        if text.lower() == "stop":
            break
        elif not re.match("^[a-z_]+$", text):
            print("Please enter alphabetic characters and/or underscores. Try again.")
        else:
            choice = input("Do you want to encode or decode? (type 'encode' or 'decode'): ")
            if choice.lower() == "encode":
                fix_spaces_encode(text)
            elif choice.lower() == "decode":
                fix_spaces_decode(text)


def fix_spaces_encode(text):
    text_list = text.split()
    new_text = "_".join(text_list)
    while "--" in new_text:
        new_text = new_text.replace("--", "-")
    while "_-_" in new_text or "_--" in new_text:
        new_text = new_text.replace("_--", "_-").replace("_-_", "_-")
    print(new_text.upper() if re.match("^[a-zA-Z_]+$", new_text) else new_text.capitalize())


def fix_spaces_decode(text):
    while "--" in text or "-_" in text or "_-" in text:
        if "--" in text:
            text = text.replace("--", "-")
        elif "-_" in text:
            text = text.replace("_-", "_-")
        elif "_-" in text:
            text = text.replace("-_", "_-")
    print(text.capitalize())


fix_spaces()