def fix_spaces(text):
    text = text.replace(" ", "_")
    while True:
        if "___" in text:
            text = text.replace("___", "-_-")
        else:
            break
    return text