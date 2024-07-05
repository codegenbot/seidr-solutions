s = str(x)
    n = len(s)
    if shift >= n:
        return s[::-1]
    shift = shift % n
    return s[-shift:] + s[:-shift]