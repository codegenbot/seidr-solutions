def fix_spaces(text):
    text = text.strip().replace(" ", "_")
    while text.count("  ") > 0:
        text = text.replace("  ", "_")
    return text