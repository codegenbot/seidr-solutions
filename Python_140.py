def fix_spaces(text):
    text = re.sub(r"\s+", "-", text)
    text = re.sub(r"(\S)\s+", r"\1_", text)
    return text