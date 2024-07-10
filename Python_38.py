def decode_cyclic(s: str):
    groups = [s[i] for i in range(len(s))] + [s[0]]
    return "".join(groups)