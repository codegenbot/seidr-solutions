Here is the completed code:

def decode_cyclic(s: str):
    groups = [s[i:i+3] for i in range(0, len(s), 3)]
    decoded = "".join([group[1]+group[0]+group[2] if len(group) == 3 else group for group in groups])
    return decoded