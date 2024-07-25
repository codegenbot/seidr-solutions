```
def fix_spaces(text):
    new_text = ""
    prev_was_space = False
    for char in text.replace("\t", " ").replace(" +", " "):
        if char == " ": 
            new_text += (char if not prev_was_space else "_")
        else:
            new_text += char
        prev_was_space = char == " "
    return new_text