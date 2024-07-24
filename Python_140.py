def fix_spaces(text):
    text = text.strip().replace(" ", "_").replace("--", "-").replace("---", "-").replace("----", "-")
    return text