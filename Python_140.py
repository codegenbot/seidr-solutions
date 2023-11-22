def fix_spaces(text):
    text = text.replace(" ", "_").replace("_"*3, "_").replace("_"*2, "_").lstrip("_")
    return text