def check_if_last_char_is_a_letter(txt):
    return txt.rstrip().endswith('') and txt.rstrip()[-1].isalpha()