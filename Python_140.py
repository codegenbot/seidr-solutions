def fix_spaces(text):
    text = text.replace(" ", "_")
    text = (
        text.replace("  ", " -")
        .replace("_  ", "_-")
        .replace("__ ", "_-")
        .replace("___", "_-")
        .replace("____", "_-")
    )
    return text