def fix_spaces(text):
    text = text.replace(" ", "_")
    return ''.join(['-' if i > 0 and (text[i-1] == " " or text[i-1] == "_") else "_" for i in range(len(text))]).lstrip("_")