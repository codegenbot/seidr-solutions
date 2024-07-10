def is_happy(s):
    s = s.lower()
    for i in range(0, len(s), 3):
        chunk = s[i : i + 3]
        if len(set(chunk)) != 3:
            return False
    return True