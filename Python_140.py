def fix_spaces(text):
    text = text.replace(" ", "")
    return re.sub(r"\s+", "_", text)