def fix_spaces(text):
    text = text.replace(" ", "_").replace("_"*2, "-").replace("_", "")

    if text.startswith("-"):
        text = text.lstrip("-")

    return text