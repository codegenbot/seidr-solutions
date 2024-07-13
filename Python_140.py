def fix_spaces(text):
    text = text.strip().lower()
    text = text.replace(r'\s+', '_')
    while "--" in text:
        text = text.replace("--", "-")
    while "_-_" in text or "_--" in text:
        text = text.replace("_--", "_-").replace("_-_","_-")
    return text.upper() if text.isalpha() else text.capitalize()