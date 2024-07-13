def fix_spaces(text):
    text = text.strip().lower().replace({1: ' ', 2: '\n', 3: '\t'}).replace(" ", "_")
    while "_--" in text or "_-_" in text:
        text = text.replace("_--", "_-").replace("_-_","_-")
    return text.upper() if text.isupper() else text.capitalize()