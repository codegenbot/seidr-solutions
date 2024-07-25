def fix_spaces(text):
    new_text = ""
    prev_was_space = False
    for char in text.replace("\t", " ").replace(" +", " "):
        new_text += char if char != " " or not prev_was_space else "_"
        prev_was_space = char == " "
    return new_text