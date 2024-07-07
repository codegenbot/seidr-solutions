def fix_spaces(text):
    text = text.replace(" ", "_")
    return (
        "_".join(i for i in text.split("_") if i)
        .replace("  ", " -")
        .replace("___", "-")
        .replace("__", "-")
        .replace("_", "")
    )