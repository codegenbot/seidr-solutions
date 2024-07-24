def encode_cyclic(s: str, n: int):
    groups = [s[i : i + n] for i in range(0, len(s), n)]
    encoded = []
    for group in groups:
        if len(group) == n:
            encoded.append(group[1:] + group[0])
        else:
            encoded.append(group)
    return "".join(encoded)


def decode_cyclic(s: str, n: int):
    groups = [s[i : i + n] for i in range(0, len(s), n)]
    decoded = []
    for group in groups:
        if len(group) == n:
            decoded.append((groups[-1] + group[1 : n + 1])[::-1])
        else:
            decoded.append(group)
    return "".join(decoded)