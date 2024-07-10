def decode_cyclic(s: str):
    rotated_groups = [s[(i-1) % len(s)] for i in range(len(s)]
    return "".join(rotated_groups)