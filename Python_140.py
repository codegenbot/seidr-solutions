import re


def fix_spaces(text):
    if not text or not isinstance(text, str):
        return
    text = text.strip().replace("--", "-").replace("\n", "").replace(" ", "_")
    while "_" in text:
        text = text.replace("_", "-")
    return text


text = input("Enter a string: ")
if not text:
    print("Error: Please enter a valid string.")
else:
    try:
        result = fix_spaces(text)
        print(result)
    except ValueError as ve:
        print(f"Error: {ve}")