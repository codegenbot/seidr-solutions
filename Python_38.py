def decode_cyclic(s: str):
    max_len = 3 - len(s) % 3 if len(s) % 3 != 0 else 0
    s += 'x' * max_len  
    groups = [s[i : i + 3] for i in range(0, len(s), 3)]
    return "".join(
        "".join(group[1:] + group[0]) if len(group) == 3 else group for group in groups
    )