def fix_spaces(text):
    text = text.replace(" ", "_")
    while True:
        new_text = text.replace("____", "-").replace("__ ", "_ ").replace("_ _", "_ ")
        if text == new_text:
            break
        text = new_text
    return text