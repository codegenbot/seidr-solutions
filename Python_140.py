def fix_spaces(text): 
    new_text = ""
    for char in text:
        if char == ' ':
            if len(new_text) > 0 and new_text[-1] == ' ':
                new_text += '-'
            else:
                new_text += '_'
        elif char.isalpha():
            if len(new_text) > 0 and not new_text[-1].isalnum() and new_text[-1] != ' ':
                new_text += '-'
            else:
                new_text += char.lower()
        else:
            new_text += char
    return new_text