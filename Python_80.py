def is_happy(s):
    if len(s) < 3:
        return False
    for i in range(len(s)):
        if len(set(s[i:])) != len(s[i:]):
            return False
    return True