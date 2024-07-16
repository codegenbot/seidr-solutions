def fix_spaces(text):
    text = "_".join(filter(None, text.split(" ")))
    return text