def is_happy(s):
    if len(s) < 3:
        return False
    for i in range(0, len(s), 3):
        chunk = s[i : i + 3]
        if sorted(chunk) != list(chunk):
            return False
    return True