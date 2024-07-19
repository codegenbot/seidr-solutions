def check_if_last_char_is_a_letter(txt):
    return txt.strip() and txt.strip()[-1].isalpha() and txt.strip()[-2] == ' ' if txt.strip() else False