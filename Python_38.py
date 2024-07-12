def decode_cyclic(s: str):
    split_str = [s[i : i + 3] for i in range(0, len(s), 3)]
    rearranged_str = [
        (group[-1] + group[:-1]) if len(group) == 3 else group for group in split_str
    ]
    return "".join(rearranged_str)