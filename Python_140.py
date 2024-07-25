```
def fix_spaces(text):
    new_text = ""
    prev_was_space = True
    for char in text.replace("\t", " ").replace(" +", " "):
        if char == " ":
            if not prev_was_space:
                new_text += "_"
            else:
                new_text += " "
            prev_was_space = True
        else:
            new_text += char
            prev_was_space = False
    return new_text