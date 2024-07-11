def is_happy(s):
    return len(s) >= 3 and len(set(s[i : i + 3] for i in range(0, len(s), 3))) == 3