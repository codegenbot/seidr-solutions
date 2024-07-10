def decode_cyclic(s: str):
    groups = [s[i] for i in range(0, len(s)-1)] + [s[-1] + s[0]]
    return "".join(groups)