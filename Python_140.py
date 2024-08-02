def fix_spaces(text):
    text = text.replace(" ", "_")
    text = text.replace("-+-", "-").replace("---", "-").replace("--", "-")
    return text