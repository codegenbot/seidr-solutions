def fix_spaces(text):
    text = text.replace(" ", "_").replace("-", "--")
    while "--" in text:
        text = text.replace("--", "-")
    return text