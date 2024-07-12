def fix_spaces(text):
    new_text = ""
    for char in text:
        if char == " " and len(new_text) > 0 and not new_text[-1].isspace():
            new_text += "-"
        elif char == " ":
            continue
        else:
            new_text += char.replace(" ", "_")
    return new_text