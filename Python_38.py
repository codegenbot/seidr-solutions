def encode_cyclic(s: str):
    groups = []
    for i in range((len(s) + 2) // 3):
        start = 3 * i
        end = min((3 * i + 3), len(s))
        if end < start:
            break
        chunk = s[start:end]
        if end - start == 1:
            groups.append(chunk[0])
        else:
            groups.extend([chunk[2], chunk[1:-1]])
    return "".join(groups)


def decode_cyclic(s: str):
    groups = [s[i : i + 3] for i in range(0, len(s), 3)]
    result = ""
    for i, group in enumerate(groups):
        if i % 2 == 1:
            group = group[-1] + group[:-1]
        result += group[1:] + group[0]
    return result