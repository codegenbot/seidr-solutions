def fix_spaces(text):
    text = text.strip().lower().replace(r'\s+', '_')
    while "_--" in text or "_-_" in text:
        text = text.replace("_--", "_-").replace("_-_","_-")
    return text.upper() if text.isalpha() else text.capitalize()