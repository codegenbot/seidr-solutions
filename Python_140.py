def fix_spaces(text):
    text = text.strip().replace(" ", "_")
    while "--" in text or "---" in text:
        text = text.replace("--", "-")
        text = text.replace("---", "- ")
    return text