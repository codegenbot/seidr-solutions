def fix_spaces(text):
    text = text.replace(" ", "_")
    while "--" in text or "- " in text or " " + "-" in text:
        if "--" in text:
            text = text.replace("--", "-")
        elif "- " in text:
            text = text.replace("- ", "-")
        else:
            text = text.replace(" " + "-", "-")
    return text