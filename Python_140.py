```
def fix_spaces(text):
    if len(text.strip()) < 3:
        return text.lower().replace(" ", "_")
    else:
        return text.lower().strip().replace(" ", "_").rstrip('_')