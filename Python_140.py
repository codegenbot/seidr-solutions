def fix_spaces(text):
    text = ' '.join(text.split()).replace(" ", "_")
    while "__" in text and "--" in text:
        text = text.replace("__", "-").replace("--", "-")
    return text.strip()