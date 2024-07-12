def fix_spaces(text):
    text = text.replace(" ", "_")
    text = (
        text.replace("__", "_-")
        .replace("---", "-_")
        .replace("___", "_-")
        .replace("____", "_")
    )
    return text