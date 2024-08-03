def fix_spaces(text):
    new_text = text.replace(" ", "_")
    if " " in new_text:
        new_text = (
            new_text.replace("  ", "-")
            .replace("_   ", "_-")
            .replace("   _", "_--")
            .replace("___", "_---")
        )
    return new_text