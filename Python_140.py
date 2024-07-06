def fix_spaces(text):
    # Check if the text has consecutive spaces
    if "  " in text:
        # Replace all consecutive spaces with a single hyphen
        text = text.replace("  ", "-")
    return text.replace(" ", "_")