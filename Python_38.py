def encode_cyclic(s: str):
    if len(s) % 3 == 1:
        s += ' ' * (2 - len(s) % 3)
    elif len(s) % 3 == 2:
        s = s[:2] + ' ' + s[2:]
    return "".join([s[i : i + 3][1:] + s[i : i + 3][0] for i in range(0, len(s), 3)])

def decode_cyclic(s: str):
    if len(s) % 3 == 1:
        s += ' ' * (2 - len(s) % 3)
    elif len(s) % 3 == 2:
        s = s[:2] + ' ' + s[2:]
    return "".join([s[i : i + 3][1:] + s[i : i + 3][0] for i in range(0, len(s), 3)])