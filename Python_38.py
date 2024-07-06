Here is the completed code:

def decode_cyclic(s: str):
    """
    takes as input string encoded with encode_cyclic function. Returns decoded string.
    """
    groups = [s[i:i+3] for i in range(0, len(s), 3)]
    return "".join("".join([groups[i][1], groups[i][0]]) if len(groups[i]) == 3 else groups[i] for i in range(len(groups)))