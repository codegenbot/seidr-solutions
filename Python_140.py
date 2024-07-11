```
def fix_spaces(text):
    text = text.replace("  ", "_").replace("   ", "_ ").replace("    ", "__ ")
    while "__" in text:
        text = text.replace("__", "_-")
    return text