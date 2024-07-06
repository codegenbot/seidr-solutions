def fix_spaces(text):
    text = text.strip()  # Remove leading and trailing spaces
    while "  " in text:  
        text = text.replace("  ", " ")  # Replace multiple spaces with single space
    return text.replace(" ", "_")