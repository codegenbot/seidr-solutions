def fix_spaces(text):
    text = text.replace("  ", " ")  
    while "  " in text:  
        text = text.replace("  ", " ")
    return text.replace(" ", "_")