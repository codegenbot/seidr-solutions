def fix_spaces(text):
    text = text.replace(" ", "_")
    while "__" in text:
        text = text.replace("__", "_-")
    text = text.replace("_-_","_")
    while "_"*2 in text:
        text = text.replace("_-", "_")
    return text