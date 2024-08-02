def fix_spaces(text):
    text = text.replace("  ", "-") 
    text = text.replace(" ", "_").replace("-", "") 
    return text