def check_if_last_char_is_a_letter(txt):
    if len(txt) == 0:
        return False
    txt = txt.strip()
    return txt[-1].isalpha() and not txt[:-1].strip().endswith(
        [str(i) for i in range(10)]
        + [chr(i) for i in range(65, 91)]
        + [chr(i) for i in range(97, 123)]
    )