def fix_spaces(text):
    new_text = ""
    for char in text:
        if char == " " and new_text[-1] == " ":
            new_text += "-"
        elif char != " " or (char == " " and new_text[-1] != " "):
            new_text += char.replace(" ", "_")
    return new_text