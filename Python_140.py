def fix_spaces(text):
    while "  " in text:
        text = text.replace("  ", "_")
    return text.strip().lower().replace(r'\s+', '_').upper() if text.isalpha() else text.capitalize()