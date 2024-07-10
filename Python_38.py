def decode_cyclic(s: str):
    k = len(s) // 2
    return "".join(s[(i+k) % len(s)] for i in range(len(s)) if len(s) > 1)