def fix_spaces(text):
    text = text.replace(" ", "_").replace("__", "-").replace("_", "")
    
    if text.startswith("-"):
        text = text[1:]
    
    return text