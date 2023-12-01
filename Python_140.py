def fix_spaces(text):
    import re
    text = re.sub(' +', '_', text)
    text = text.replace("__", "_")
    return text