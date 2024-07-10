def decode_cyclic(s: str):
    decoded = [s[i] for i in range(1, len(s), 3)]
    decoded.insert(0, s[-1])
    decoded += [s[i] for i in range(0, len(s), 3) if i != len(s) - 1]
    return "".join(decoded)