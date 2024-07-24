def encode_cyclic(s: str, n: int):
    groups = [s[i : i + n] for i in range(0, len(s), n)]
    encoded_groups = []
    for group in groups:
        if len(group) == n:
            encoded_groups.append(group[1:] + group[0])
        else:
            encoded_groups.append(group)
    return "".join(encoded_groups)


def decode_cyclic(s: str, n: int):
    groups = [s[i : i + n] for i in range(0, len(s), n)]
    decoded_groups = []
    for group in groups:
        if len(group) == n:
            decoded_groups.append((group[-1] + group[: n - 1]))
        else:
            decoded_groups.append(group)
    return "".join(decoded_groups)