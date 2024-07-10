def check_if_last_char_is_a_letter(txt):
    if len(txt) == 0:
        return False
    last_char = txt[-1]
    return last_char.isalpha() and txt.rfind(" ") != txt.find(last_char)