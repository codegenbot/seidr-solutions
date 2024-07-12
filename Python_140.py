def fix_spaces(text):
    text = text.replace("  +", " ")
    return text.replace(" ", "_").replace("__", "_")