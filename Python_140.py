def fix_spaces(text):
    text = text.replace(" ", "_")
    while True:
        text = text.replace("___", "-_-")
        if text.count("_") < 2:
            break
    return text