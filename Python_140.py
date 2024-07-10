def fix_spaces(text):
    new_text = ""
    in_word = False
    for char in text:
        if char == " ":
            if not in_word:
                if len(new_text) > 0 and len(new_text) <= 2:
                    new_text += "_ "
                elif len(new_text) > 2:
                    new_text += "- "
                else:
                    new_text += " "
            else:
                new_text += char
            in_word = False
        elif char != "\n" and char != " ":
            if not in_word:
                new_text += char.lower()
                in_word = True
    return new_text.strip().replace(" ", "_")