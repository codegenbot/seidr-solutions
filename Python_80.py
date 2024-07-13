```
def is_happy(s):
    if len(s) < 3:
        return False
    for i in range(0, len(s), 3):
        chunk = s[i:i+3]
        if len(chunk) != 3 or set(chunk) != {'h', 'a', 'p'}:
            return False
    return True