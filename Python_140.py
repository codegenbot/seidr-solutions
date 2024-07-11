```
def fix_spaces(text):
    text = " ".join(text.split())
    text = text.replace("  ", "_")
    while "   " in text:
        text = text.replace("   ", "_")
    return text.replace(" ", "_").lower()