def fix_spaces(text):
    text = text.strip().replace(" ", "_")
    if len(text) < 3:
        return text.lower()
    else:
        return text[:3].lower() + '...' + text[-3:].lower()