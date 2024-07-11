def decode_cyclic(s: str):
    decoded_groups = []
    group = ""
    for char in s:
        group += char
        if len(group) == 3:
            decoded_groups.append(group[1] + group[0] + group[2])
            group = ""
    if group:
        decoded_groups.append(group)
    return "".join(decoded_groups)