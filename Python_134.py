def check_if_last_char_is_a_letter(txt):
    txt = txt.strip()
    if not txt or txt[-1].isspace():
        return False
    return txt[-1].isalpha() and (len(txt) == 1 or txt[-2].isspace())