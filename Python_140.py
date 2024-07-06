def fix_spaces(text):
    if len(text) < 3:
        return text.lower().replace(" ", "_")
    else:
        return text[:3].lower().replace(" ", "_") + '...' + text[-3:].lower().replace(" ", "_")