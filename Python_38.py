```
def encode_cyclic(s: str):
    groups = [s[i:i+3] if i+len(s)%3 == 0 else s[i:] for i in range(0, len(s), 3)]
    return "".join(group[1]+group[0] if len(group) == 3 else group for group in groups)

def decode_cyclic(s: str):
    result = ""
    for i in range(0, len(s), 2):
        result += s[i+1] + s[i]
    return result