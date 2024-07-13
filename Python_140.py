def fix_spaces(text):
    text = ' '.join(text.split())  # Replace multiple spaces with single space
    text = text.replace(" ", "_")
    while "_--" in text or "_-_" in text:
        text = text.replace("_--", "_-").replace("_-_","_-")
    return text.strip()