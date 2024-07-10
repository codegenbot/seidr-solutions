def fix_spaces(text):
    text = text.replace(" ", "_")
    while True:
        if "_" * 2 in text:
            text = text.replace("_ " * 2, "_-")
        else:
            break
    return text