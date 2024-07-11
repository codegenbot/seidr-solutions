def decode_cyclic(s: str):
    groups = [s[i : i + 3] for i in range(0, len(s), 3)]
    return "".join("".join(group[1:] + group[0]) if i % 2 != 0 else group for i, group in enumerate(groups))