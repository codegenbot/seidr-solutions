def fix_spaces(text):
    text = text.replace(" ", "_")
    while True:
        prev_text = text
        text = text.replace("__", "_-")
        if text == prev_text:
            break
    return text