def decode_cyclic(s: str):
    return "".join([(group[-1] + group[:-1]) if len(group) == 3 else group for group in [s[i:i+3] for i in range(0, len(s), 3)])