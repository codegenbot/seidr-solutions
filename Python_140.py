```
import re


def fix_spaces(text):
    if not isinstance(text, str):
        return "Invalid input. Please enter a string."

    try:
        new_text = re.sub(" +", "_", text)
        if ' ' in new_text:
            return new_text
        else:
            return "No space found"
    except Exception as e:
        print(f"Error: {e}")
        return "Invalid input"