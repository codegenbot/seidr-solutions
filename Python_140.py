import re


def fix_spaces(text):
    try:
        return re.sub(
            r"\s+", lambda x: "_" if len(x.group().strip()) == 0 else " - ", text
        )
    except Exception as e:
        print(f"Error: {e}")