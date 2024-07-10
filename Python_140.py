def fix_spaces(text):
    text = text.replace(" ", "_")
    while "--" in text or "- " in text or " " + text[-1] == " ":
        text = text.replace("--", "-")
        text = text.replace("- ", "-")
        if text[-1] == " ":
            text = text[:-1]
    return text