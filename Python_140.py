```
def fix_spaces(text):
    text = text.replace(" ", "_")
    return text.replace("  ", "-").replace("---", "-").replace("--", "-").replace("-", "_-").replace("_ _", "_-_").replace(" _", "_-_").replace("_ ", "_-_")