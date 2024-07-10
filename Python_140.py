def fix_spaces(text):
    new_text = text.replace(" ", "_")
    return (
        new_text.replace("  ", "_")
        .replace("__", "-__")
        .translate(str.maketrans({"_ ": "_-"}))
    )