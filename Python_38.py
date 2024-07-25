def decode_cyclic(s: str):
    if len(s) % 3 != 0:
        s += 'x' * ((3 - len(s) % 3) % 3)
    result = ""
    i = 0
    while i < len(s):
        group = s[i:i+3]
        result += group[1] + (group[0] if i < len(s)-2 else '')
        i += 3
    return result