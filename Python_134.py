def check_if_last_char_is_a_letter(txt):
    return txt.strip() and txt[-1].isalpha() and not txt[-2].isalpha() if txt[-1] != ' ' else False