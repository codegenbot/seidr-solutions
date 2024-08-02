def fix_spaces(text):
    text = text.replace("  ", "_")  # Replace double spaces with a single underscore
    text = text.replace(" ", "_")  # Replace single spaces with underscores
    return text