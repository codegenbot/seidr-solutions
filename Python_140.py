def fix_spaces(text):
    text = text.replace(" ", "_")
    while True:
        new_text = text.replace("--", "-")
        if new_text == text:
            break
        text = new_text
    return text