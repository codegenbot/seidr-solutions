```
def encode_cyclic(s: str):
    groups = []
    for i in range(0, len(s), 3):
        group = s[i:i+3] if i+3 <= len(s) else s[i:]
        groups.append(group[1:] + group[0] if len(group) == 3 else group)
    return "".join(groups).lstrip('x')