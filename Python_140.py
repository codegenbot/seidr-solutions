def fix_spaces(text):
    text = text.replace(" ", "_")
    text = text.replace("__", "-")
    
    if text.startswith("_"):
        text = "-" + text[1:]
    
    return text