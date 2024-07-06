def fix_spaces(text):
    text = text.replace(" ", "_")
    while True:
        if "  " in text:
            text = text.replace("  ", "-")
        else:
            break
    return text