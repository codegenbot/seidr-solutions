def decode_cyclic(s: str):
    if len(s) <= 1:
        return ""
    k = len(s) // 2
    return "".join(s[(i+k) % len(s)] for i in range(0, len(s), k)