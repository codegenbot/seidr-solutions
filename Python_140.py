def fix_spaces(text):
    text = text.replace(" ", "_")
    return text.replace("  ", " - ").replace("_  ", "_- ").replace("_   ", "_- ")