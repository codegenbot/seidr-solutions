def decode_cyclic(s: str):
    k = len(s) // 2
    return "".join(s[k*i % len(s)] for i in range(len(s)))