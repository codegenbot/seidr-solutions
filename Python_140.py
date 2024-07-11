def fix_spaces(text):
    text = text.replace(" ", "_")
    while "__" in text and "--" in text:
        text = text.replace("__", "-").replace("--", "-")
    while "  " in text:  
        text = text.replace("  ", " ")
    return text.strip()