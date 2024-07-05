def check_if_last_char_is_a_letter(txt):
    txt = txt.strip()
    if not txt or not txt[-1].isalpha():
        return False
    return len(txt.split()[-1]) == 1