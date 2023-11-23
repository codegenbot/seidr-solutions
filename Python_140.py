def fix_spaces(text):
    text = text.replace(" ", "_")
    i = 0
    while i < len(text)-2:
        if text[i:i+3] == "   ":
            text = text[:i] + "-" + text[i+3:]
        i += 1
    return text