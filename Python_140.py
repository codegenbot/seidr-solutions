def fix_spaces(text):
    text = text.replace(" ", "_")
    i = 0
    while i < len(text) - 2:
        if text[i] == "_" and text[i+1] == "_" and text[i+2] == "_":
            text = text[:i] + "-" + text[i+3:]
        else:
            i += 1
    return text