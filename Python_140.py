import re


def fix_spaces(text):
    if not isinstance(text, str):
        return "Invalid input. Please enter a string."

    try:
        return re.sub(" +", "_", text)
    except Exception as e:
        print(f"Error: {e}")
        return "Invalid input"