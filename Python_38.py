def decode_cyclic(s: str):
    groups = [(group[2:] + group[:2]) for group in s.split()]
    return "".join(groups)