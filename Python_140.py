```
def fix_spaces(text):
    new_text = ""
    prev_was_space = True
    for char in text.replace("\t", ""):
        if char == " ":
            if prev_was_space: 
                new_text += "_"
            else: 
                new_text += " "
            prev_was_space = (char == " ")
        elif not prev_was_space:
            new_text += char
            prev_was_space = False
    return new_text