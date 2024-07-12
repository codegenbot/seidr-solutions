def fix_spaces(text):
    return (
        text.replace(" ", "_")
        .replace("  ", "_-")
        .replace("_  ", "_-_")
        .replace("_   ", "_-_")
        .replace("_  _", "_-_")
        .replace("_   _", "____")
        .replace("_ ___", "_____")
        .replace("_ ____", "______")
    )