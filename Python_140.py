```
def fix_spaces(text):
    new_text = ""
    in_word = False
    prev_char_was_space = True
    for char in text:
        if char == " " and not in_word:
            if len(new_text) > 0 and not prev_char_was_space:
                if len(new_text) <= 2:
                    new_text += "_"
                else:
                    new_text += "_"
            elif len(new_text) > 0 and prev_char_was_space:
                if len(new_text) <= 2:
                    new_text += "_"
                else:
                    new_text += "_"
        elif char != "\n" and (char == " " or not in_word):
            in_word = True
            prev_char_was_space = False
            new_text += char
        elif char != "\n" and in_word:
            if char != " ":
                in_word = False
            prev_char_was_space = False
            new_text += char
    return new_text.strip()