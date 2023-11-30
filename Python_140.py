def fix_spaces(text):
    text = (
        text.replace(" ", "_").replace("__", "-").replace("_", "", 1).replace("__", "-")
    )

    if text.startswith("-"):
        text = text[1:]

    return text