def fix_spaces(text):
    import re

    text = re.sub(r"\s+", "_", text)
    return text.replace(" ", "")