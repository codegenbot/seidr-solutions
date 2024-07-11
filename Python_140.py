```
def fix_spaces(text):
    new_text = ""
    prev_char = None
    for char in text:
        if char == " ":
            if prev_char != " ": 
                new_text += "_"
            else:  
                new_text += "-"
        elif char != " " and prev_char == " ":
            new_text += char
        else:
            new_text += char
        prev_char = char
    return new_text