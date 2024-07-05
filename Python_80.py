def is_happy(s):
    for i in range(len(s) - 2):
        if s[i] == s[i + 1] and s[i + 1] == s[i + 2]:
            return True
    return False