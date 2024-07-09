def fix_spaces(text):
    text = text.replace("   ", "___").replace("  ", "__").replace(" ", ",")
    return text