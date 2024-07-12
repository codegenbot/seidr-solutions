def fix_spaces(text):
    return (
        text.replace(" ", "_")
        .replace("  ", "_-_")
        .replace("_  ", "_-_")
        .replace("_   ", "_-_")
        .replace("__ ", "_-_")
        .replace("__  ", "_-_")
        .replace("__   ", "_-_")
    )