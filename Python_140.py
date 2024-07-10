def fix_spaces(text):
    return text.replace(" ", "_").replace("_  ", "_").strip().replace("_", "_ ")