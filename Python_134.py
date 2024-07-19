def check_if_last_char_is_a_letter(txt):
    return txt.strip() != '' and not txt.split()[-1].isalpha()