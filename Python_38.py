Here is the completed code:

def encode_cyclic(s: str):
    groups = [s[i:i+3] if i+3 <= len(s) else s[i:] for i in range(0, len(s), 3)]
    return "".join(groups[i][1:] + groups[i][0] if len(groups[i]) == 3 else groups[i] for i in range(len(groups)))

def decode_cyclic(s: str):
    groups = [s[i:i+3] if i+3 <= len(s) else s[i:] for i in range(0, len(s), 3)]
    return "".join(group[1:] + group[0] if len(group) == 3 else group for group in groups)