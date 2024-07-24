def check_if_last_char_is_a_letter(txt):
    return txt.strip()[-1].isalpha() and txt.strip()[-2] == ' ' if txt else False