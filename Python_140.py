def fix_spaces(text):
    text = text.replace(" ", "_")
    while "--" in text or "---" in text or "----" in text:
        text = text.replace("--", "-").replace("---", "-").replace("----", "-")
    return text