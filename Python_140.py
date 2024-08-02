def fix_spaces(text):
    text += " "
    new_text = ""
    for char in text:
        if char == " " and (new_text[-1] == " " or not new_text):
            new_text += "-"
        elif char != " ":
            new_text += char
    return new_text.strip()