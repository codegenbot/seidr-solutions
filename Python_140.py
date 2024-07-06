def fix_spaces(text):
    text = text.replace(" ", "_").strip()
    if len(text) > 5:
        return text[:3] + '...' + text[-3:]
    else:
        return text