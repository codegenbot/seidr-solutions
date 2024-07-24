def is_happy(s):
    s = s.lower()
    if len(s) % 3 != 0:
        return False
    for i in range(0, len(s), 3):
        chunk = s[i:i+3]
        if sorted(chunk) != list(chunk):
            return False
    return True