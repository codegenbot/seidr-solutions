def fix_spaces(text, pattern):
    import re
    text = re.sub(pattern, "_", text)
    return text.replace(" ", "")
