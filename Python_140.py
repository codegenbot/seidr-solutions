def fix_spaces(text):
    if len(text.strip()) < 3:
        return text.lower().replace(" ", "_")
    else:
        return text.strip().lower().replace(" ", "_").rstrip('_')