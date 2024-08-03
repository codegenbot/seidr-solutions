def check_if_last_char_is_a_letter(txt):
    if len(txt) == 0:
        return False
    if txt[-1].isalpha() and (not txt[:-1].replace(" ", "").isalnum()):
        return True
    return False