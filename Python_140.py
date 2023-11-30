def fix_spaces(text):
    text = text.replace("_", " ").replace("-", " ")
    text = " ".join(text.split())
    text = text.replace(" ", "_")
    return text