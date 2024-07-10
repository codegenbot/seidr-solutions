def fix_spaces(text):
    text = ' '.join(text.split())
    text = text.replace(" ", "_")
    while "__" in text:
        text = text.replace("__", "_")
    return text