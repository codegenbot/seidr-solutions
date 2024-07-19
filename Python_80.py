def is_happy(s):
    if len(s) < 3:
        return False
    for i in range(0, len(s), 3):
        chunk = s[i:i+3]
        if list(set(chunk))[0] == list(set(chunk))[1] or list(set(chunk))[0] == list(set(chunk))[2] or list(set(chunk))[1] == list(set(chunk))[2]:
            return True
    return False