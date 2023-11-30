def decode_cyclic(s: str) -> str:
    if len(s) % 3 != 0:
        raise ValueError("Invalid input length")
    groups = [s[i : i + 3] for i in range(0, len(s), 3)]
    groups = [group[-1] + group[:-1] for group in groups]
    return "".join(groups)