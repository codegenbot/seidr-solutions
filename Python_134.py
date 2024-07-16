def check_if_last_char_is_a_letter(txt):
    if txt == "":
        return False
    return txt[-1].isalpha() and txt[-2] == " " if len(txt) > 1 else txt.isalpha()