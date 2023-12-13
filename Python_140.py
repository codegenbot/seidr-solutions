def fix_spaces(text):
    text = text.replace(" ", "_")
    for i in range(len(text)-2):
        if text[i:i+3] == "   ":
            text = text[:i] + "-" + text[i+3:]
    return text