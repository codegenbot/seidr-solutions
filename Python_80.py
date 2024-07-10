def is_happy(s):
    return len(s) >= 3 and all(s[i] != s[i+1] and s[i] != s[i+2] and s[i+1] != s[i+2] for i in range(len(s) - 2))