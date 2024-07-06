```
import re


def fix_spaces(text):
    if not text or not isinstance(text, str):
        return
    text = text.strip().replace("--", "-").replace("\n", "").replace(" ", "_")
    text = text.replace("_", lambda m: f"_{m.group(0).strip('_')}" if len(m.group(0)) > 1 else m.group(0))
    return text


text = input("Enter a string: ")

if not isinstance(text, str):
    raise ValueError("Invalid Input. Please enter a valid string.")

try:
    result = fix_spaces(text.strip().replace("\n", "").replace("--", "-").replace(" ", "_"))
    print(result)
except ValueError as ve:
    print(f"Error: {ve}")