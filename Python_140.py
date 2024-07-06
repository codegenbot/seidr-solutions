```
def fix_spaces(text):
    text = text.strip()  
    while "  " in text:  
        text = text.replace("  ", " ")  
    return text.replace(" ", "_")