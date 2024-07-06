def fix_spaces(text):
    text = text.replace(" ", "_")
    text = text.strip() 
    while "__" in text:
        text = text.replace("__", "_-")
    return text