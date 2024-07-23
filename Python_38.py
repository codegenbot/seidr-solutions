```
def encode_cyclic(s: str):
    groups = [s[i : min((i + 3), len(s))] for i in range(0, len(s), 1)]
    groups = [(group[1:] + group[0]) if len(group) == 2 else group for group in groups]
    return "".join(groups)

def decode_cyclic(s: str):
    groups = [s[i : min((i + 3), len(s))] for i in range(0, len(s), 1)]
    decoded_groups = [(group[2] + group[0] + group[1]) if len(group) == 3 else group for group in groups]
    return "".join(decoded_groups)