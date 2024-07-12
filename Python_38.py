def encode_cyclic(s: str):
    groups = [s[i : i + 3] for i in range(0, len(s), 3)]
    if len(s) % 3 != 0:
        groups.append(s[-1])
    return "".join(
        group[1:] + group[0] if len(group) == 3 else group for group in groups
    )


def decode_cyclic(s: str):
    result = []
    i = 0
    while i < len(s):
        if s[i] == s[i + 2]:
            result.append(s[i : i + 3][::-1])
            i += 3
        else:
            result.append(s[i : i + 3])
            i += 3
    return "".join(result)