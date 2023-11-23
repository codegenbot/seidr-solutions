def decode_cyclic(s: str) -> str:
    groups = [s[i:min(i + 3, len(s))] for i in range(0, len(s), 3)]
    groups = [(group[-1] + group[:-1]) if len(group) == 3 else group for group in groups]
    return ''.join(groups)