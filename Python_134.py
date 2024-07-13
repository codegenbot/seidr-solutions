```
def check_if_last_char_is_a_letter(txt):
    if len(txt) == 0:
        return False
    last_char = txt[-1]
    if not last_char.isalpha():
        return False
    for i in range(len(txt)-1, -1, -1):
        if not last_char.lower() == txt[i].lower():
            return False
    return True