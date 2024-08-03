def fix_spaces(text):
    text = text.replace(" ", "_")
    text = " ".join(text.split())
    while "- -" in text:
        text = text.replace("- -", "-")
    return text