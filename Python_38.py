def decode_cyclic(s):
    if len(s) != 3:
        raise ValueError("Input string must be exactly 3 characters long.")
    groups = [s[i : i + 3] for i in range(0, len(s), 3)]
    decoded_groups = [
        (group[1:] + group[0]) if len(group) == 3 else group for group in groups
    ]
    return "".join(decoded_groups)