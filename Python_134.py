def check_if_last_char_is_a_letter(txt):
    return txt[-1].isalpha() and txt[-1] != ' ' and (len(txt.split()) == 1 or txt[-2] == ' ')