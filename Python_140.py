def fix_spaces(text):
    new_text = ""
    in_word = False
    for char in text:
        if char == " ":
            if not in_word:
                if len(new_text) > 0:
                    new_text += "_" if len(new_text) <= 2 else "-"
            elif len(new_text) > 3 and new_text[-1] != "-":
                new_text = new_text[:-1] + "-"
            in_word = False
        elif char != "\n" and char != " ":
            new_text += char
            in_word = True
    return new_text.strip()