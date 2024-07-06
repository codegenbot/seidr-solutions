def decode_cyclic(s: str, n: int) -> str:
    groups = [s[(3 * i) : min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)]
    result = "".join(
        [group[n:] + group[:n] if len(group) == 3 else group for group in groups]
    )
    return result