
def fix_spaces(text):
    import re
    if not text:
        return ""
    text = re.sub(r"\s+", "_", text)
    return text.replace(" ", "")