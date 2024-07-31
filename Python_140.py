def fix_spaces(text):
    text = text.replace(" ", "_")
    while "_" in text and ".." in text:
        text = text.replace("..", "-")
    return text