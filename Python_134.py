def check_if_last_char_is_a_letter(txt):
    txt = txt.strip()
    return txt[-1].isalpha() and (len(txt.split()[-1]) == 1) if txt else False