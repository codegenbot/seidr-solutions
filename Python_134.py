```
def check_if_last_char_is_a_letter(txt):
    if len(txt) == 0:
        return False
    last_char = txt[-1]
    if last_char.isalpha():
        for i in range(len(txt)-2, -1, -1):
            if not txt[i].isspace():
                return False
        return True
    return False