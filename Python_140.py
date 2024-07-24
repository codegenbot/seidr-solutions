def fix_spaces(text):
    new_text = ""
    add_hyphen = False
    for char in text:
        if char.isalnum():
            new_text += char
            add_hyphen = False
        elif char.isspace():
            if not add_hyphen:
                new_text += "-"
                add_hyphen = True
            else:
                new_text += "_"
        else:
            new_text += "-"
            add_hyphen = True
    if text.strip() != text:  
        new_text += "-" * len(text[:-1]) 
    return new_text