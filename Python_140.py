```
def fix_spaces(text):
    new_text = ""
    in_word = False
    for char in text:
        if char != " " and char != "\n":
            if not in_word:
                in_word = True
            new_text += char
        elif char == " ":
            if in_word:
                new_text += "_ "
                in_word = False
            else:
                new_text += " "
    return new_text.strip()