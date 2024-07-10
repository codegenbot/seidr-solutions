def fix_spaces(text):
    new_text = ""
    in_word = False
    for char in text:
        if char == " ":
            if in_word:
                new_text += " "
            else:
                new_text += "_"
            in_word = False
        elif char != "\n" and char != " ":
            if not in_word:
                if len(new_text) <= 2:
                    new_text += "_" + char
                else:
                    new_text += char
            in_word = True
    return new_text.strip()