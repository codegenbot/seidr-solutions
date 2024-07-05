def decode_cyclic(s):
    n = len(s) // 3
    return "".join(s[i * n : (i + 1) * n] for i in range(3))