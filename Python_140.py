def fix_spaces(text):
    return (
        text.replace(" ", "_")
        .replace("  ", "-_")
        .replace("___", "-_")
        .replace("____", "-_")
        .replace("_____", "-_")
    )