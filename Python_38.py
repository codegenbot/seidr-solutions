def decode_cyclic(s: str):
    return "".join(c + s[i-1] + c for i, c in enumerate(s))