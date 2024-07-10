Here is the completed code:

def decode_cyclic(s: str):
    """
    takes as input string encoded with encode_cyclic function. Returns decoded string.
    """
    groups = [s[i:i+3] for i in range(0, len(s), 3)]
    groups = [(group[-1] + group[1:-1]) if len(group) == 3 else group for group in groups]
    return "".join(groups)