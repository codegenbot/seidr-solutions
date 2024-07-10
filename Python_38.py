def decode_cyclic(s: str):
    rotated_groups = [s[i+1] for i in range(len(s)-1)] + [s[0]
    return "".join(rotated_groups)