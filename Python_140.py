import re


def fix_spaces(text):
    try:
        return re.sub(" +", "_", text)
    except Exception as e:
        print(f"Error: {e}")
        return "Invalid input"