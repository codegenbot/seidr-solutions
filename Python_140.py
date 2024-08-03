def fix_spaces(text):
    text = text.strip()  
    text = text.replace(" ", "_")
    while "--" in text:
        text = text.replace("--", "-")
    return text