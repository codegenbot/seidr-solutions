def fix_spaces(text):
    text = ' '.join(text.split())  
    text = text.replace(" ", "_")
    while "__" in text:
        text = text.replace("__", "_")
    return text

print(fix_spaces("   Exa 1 2 2 mple"))