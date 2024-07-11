def fix_spaces(text):
    text = "".join("_" if not char.isalnum() else char for char in text)
    return text