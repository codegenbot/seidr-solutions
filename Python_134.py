```
def check_if_last_char_is_a_letter(txt):
    if len(txt) == 0:
        return False
    last_char = txt[-1]
    words = txt.split()
    if len(words) > 0 and txt.rstrip().endswith(last_char):
        return False
    return last_char.isalpha()