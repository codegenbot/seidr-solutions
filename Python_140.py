import re


def fix_spaces():
    text = input("Enter a string: ")
    if not isinstance(text, str):
        return "Invalid input. Please enter a string."
    elif len(text) > 100:
        return "Input too long. Maximum length is 100 characters."

    try:
        return re.sub(" +", "_", text)
    except Exception as e:
        print(f"Error: {e}")
        return "Invalid input"