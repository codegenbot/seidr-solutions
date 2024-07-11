def decode_cyclic(s: str):
    groups = [s[i : i + 3] for i in range(0, len(s), 3)]
    decoded_groups = [
        (group[1] + group[0]) + (group[2] if len(group) > 1 else "") for group in groups
    ]
    return "".join(decoded_groups)