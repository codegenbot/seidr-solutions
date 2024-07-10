def fix_spaces(text):
    new_text = ""
    in_word = False
    for char in text:
        if char == " ":
            if not in_word:
                new_text += "_"
            else:
                new_text += char
            in_word = False
        elif char != "\n" and char != " ":
            new_text += char
            in_word = True
    return new_text.strip()