def fix_spaces(text):
    text = text.replace(" ", "_").replace("__", "-").replace("_-", "-")
    return text