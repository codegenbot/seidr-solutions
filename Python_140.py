def fix_spaces(text):
    text = (
        text.strip()
        .replace(" ", "_")
        .replace("--", "-")
        .replace("---", "-")
        .replace("----", "-")
    )
    while "--" in text or "---" in text or "----" in text:
        text = text.replace("--", "-")
        text = text.replace("---", "-")
        text = text.replace("----", "-")
    return text