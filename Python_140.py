def fix_spaces(text):
    text = text.strip().lower().replace(" ", "_")
    while "_--" in text or "_-_" in text:
        text = text.replace("_--", "_-").replace("_-_","_-")
    return text.rstrip().upper() if text.isupper() else text.capitalize()