def fix_spaces(text):
    text = text.replace(" ", "_")
    while "--" in text or "- " in text or " " + "_" in text:
        if "--" in text:
            text = text.replace("--", "-")
        if "- " in text:
            text = text.replace("- ", "-")
        if " " + "_" in text:
            text = text.replace(" _", "_")
    return text