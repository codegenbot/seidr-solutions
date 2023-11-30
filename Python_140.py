def fix_spaces(text):
    text = text.replace(" ", "_")
    text = text.replace("__", "-")
    text = text.replace("_", "", 1)
    text = text.replace("__", "-")
    
    if text.startswith("-"):
        text = text[1:]
    
    return text