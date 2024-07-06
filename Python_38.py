def decode_cyclic(s: str) -> str:
    if len(s) % 3 != 0:
        return "".join([s[(len(s) // 3) :] + s[: len(s) % 3]])
    groups = [s[(3 * i) : min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)]
    return "".join(
        [group[1:] + group[0] if len(group) == 3 else group for group in groups]
    )