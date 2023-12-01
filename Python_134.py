def check_if_last_char_is_a_letter(txt):
    return txt[-1].isalpha() and (len(txt.split()[-1]) == 1)