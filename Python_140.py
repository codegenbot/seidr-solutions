def fix_spaces(text):
    import re
    text = input("Enter text with spaces: ")
    return re.sub(r"\s+", "_", text)