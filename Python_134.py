def check_if_last_char_is_a_letter(txt):
    return txt and txt[-1].isalpha() and txt[:-1].find(txt[-1]) == -1