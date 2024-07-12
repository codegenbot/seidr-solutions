Here is the completed code:

def decode_cyclic(s: str):
    groups = []
    while s:
        if len(s) >= 3:
            groups.append(s[:3])
            s = s[3:]
        else:
            groups.append(s)
            break
    decoded_groups = [(group[-1] + group[:-1]) if len(group) == 3 else group for group in groups]
    return "".join(decoded_groups)