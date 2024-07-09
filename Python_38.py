def decode_cyclic(s: str):
    groups = [s[i : i + 2] for i in range(0, len(s), 2)]
    decoded_groups = []
    for group in groups:
        if len(group) == 1:
            decoded_groups.append('0' + group[0])
        else:
            decoded_groups.append(group[1] + group[0])
    return "".join(decoded_groups)