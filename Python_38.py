def decode_cyclic(s: str):
    return "".join([s[i-1] + s[i-2] + s[i-3] for i in range(len(s), 0, -3)][::-1])