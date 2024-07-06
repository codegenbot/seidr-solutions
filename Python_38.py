def decode_cyclic(s: str):
    if not s or len(s) < 3:
        return "" if not s else s
    
    groups = [s[(3 * i):min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)]
    groups = [(group[2:] + group[:2]) if len(group) == 3 else group for group in groups]
    return "".join(groups)