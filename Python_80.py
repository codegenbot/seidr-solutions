def is_happy(s):
    return len(s) >= 3 and all(s[i:i+3] != s[i+1:i+4] for i in range(len(s)-2))