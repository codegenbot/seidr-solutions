def check_if_last_char_is_a_letter(txt):
    return len(txt.strip()) > 0 and txt.strip()[-1].isalpha() and txt.strip()[-1] not in txt.strip().split()[-1]