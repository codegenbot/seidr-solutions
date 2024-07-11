def fix_spaces(text):
    text = text.replace(" ", "_")
    text = text.replace(" ", "")
    while "--" in text or "- " in text or " -" in text:
        text = text.replace("--", "-")
        text = text.replace("- ", "_-")
        text = text.replace(" -", "-_")
    return text