def check_if_last_char_is_a_letter(txt):
    return txt[-1].isalpha() and not txt[-1].isspace() and not txt.split()[-1].isalpha()