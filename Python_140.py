def fix_spaces(text):
    new_text = ""
    add_hyphen = False
    for char in text.strip(): 
        if char.isalnum() or char in ["-", "_"]:
            new_text += char
            add_hyphen = False  # Reset hyphen flag
        elif char == " " and not add_hyphen:
            new_text += "-"
            add_hyphen = True
        elif add_hyphen and char == " ":
            new_text += "-"
    return new_text