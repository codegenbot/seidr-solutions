```
def fix_spaces(text):
    text = text.strip()  
    text = text.replace(" ", "_")
    while "__" in text:
        text = text.replace("__", "_")
    return text