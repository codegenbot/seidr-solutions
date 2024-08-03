```
def check_if_last_char_is_a_letter(txt):
    if len(txt) == 0:
        return False
    last_char = txt[-1]
    if not last_char.isalpha():
        return False
    if txt[:-1].strip().endswith(last_char):
        return False
    return True