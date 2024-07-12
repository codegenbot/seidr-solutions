def fix_spaces(text):
    new_text = ""
    for char in text:
        if char != " " or (new_text.endswith(" ") and new_text.count(" ") > 1):
            new_text += char
        else:
            if len(new_text) > 0:
                new_text += "_"
    return new_text