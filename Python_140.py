def fix_spaces(text):
    text = text.replace(" ", "_")
    text = text.replace("__", "-")
    while text.startswith("_"):
        text = "-" + text[1:]
    while text.endswith("_"):
        text = text[:-1] + "-"
    return text