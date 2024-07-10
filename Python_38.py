def decode_cyclic(s: str):
    if s[0] == "x" or s[0].lower() == "x":
        return s[1:] + s[0]
    elif s:
        return s
    else:
        return ""