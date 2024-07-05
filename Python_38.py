def decode_cyclic(s):
    if len(s) % 3 == 0:
        n = len(s) // 3
        return "".join(s[i * n : (i + 1) * n] for i in range(3))
    else:
        raise ValueError("Input string length must be divisible by 3")