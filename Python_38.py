def decode_cyclic(s: str) -> str:
    k = len(s) // 2
    return "".join(s[i] for i in range(0, len(s), k))