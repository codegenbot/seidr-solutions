def fix_spaces(text):
    text = text.strip().replace(" ", "_")
    while "_--" in text or "_-_" in text:
        text = text.replace("_--", "_-").replace("_-_","_-")
    return text