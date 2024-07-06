```
def check_if_last_char_is_a_letter(txt):
    if len(txt) == 0:
        return False
    last_char = txt[-1].lower()
    prev_chars = txt[:-1].split()
    for char in prev_chars:
        if last_char in char.lower():
            return False
    return last_char.isalpha()