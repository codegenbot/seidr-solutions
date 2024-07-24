def fix_spaces(text):
    new_text = ""
    add_hyphen = False
    for char in text:
        if char.isalnum() or char in ["-", "_"]:
            if not add_hyphen and (len(new_text) == 0 or char != "-"):
                new_text += char
            else:
                new_text += "-" + char
            add_hyphen = False
        elif not add_hyphen and char == " ":
            new_text += "-"
            add_hyphen = True
        elif add_hyphen and char == " ":
            if len(new_text) > 0 and (new_text[-1].isalnum() or new_text[-1] in ["-", "_"]):
                new_text += char
            else:
                new_text += "-"
    return new_text