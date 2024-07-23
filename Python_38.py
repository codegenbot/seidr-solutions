def decode_cyclic(s: str):
    result = ""
    while len(s) >= 2:
        result += chr(int(s[:2], 2))
        s = s[2:]
    return result