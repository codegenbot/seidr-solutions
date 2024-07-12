def fix_spaces(text):
    new_text = ""
    prev_space = False
    for char in text:
        if char == " ":
            if not prev_space: 
                if len(new_text) > 0 and new_text[-1] != "-":
                    if new_text and new_text[-1] != "_":
                        new_text += "-"
            prev_space = True
        else:
            prev_space = False
        new_text += char
    return new_text