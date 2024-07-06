def fix_spaces(text):
    text = text.replace(" ", "_").replace("  ", "_") 
    while "_  " in text:  
        text = text.replace("_  "," _")
    return text