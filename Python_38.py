Here is the completed code:

def encode_cyclic(s: str):
    groups = [s[(3 * i):min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)]
    groups = [(group[1:] + group[0]) if len(group) == 3 else group for group in groups]
    return "".join(groups)

def decode_cyclic(s: str):
    groups = [s[i:i+3] if i+3 <= len(s) else s[i:] for i in range(0, len(s), 3)]
    result = ""
    for group in groups:
        if len(group) == 2:
            result += group[1] + group[0]
        else:
            result += group
    return result