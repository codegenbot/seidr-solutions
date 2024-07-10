Here is the completed code:

def decode_cyclic(s: str):
    """
    returns decoded string by cycling groups of three characters.
    """
    # split string to groups
    groups = [s[i:i+3] for i in range(0, len(s), 3)]
    # cycle elements in each group. Unless group has fewer elements than 3.
    groups = [(group[2] + group[:2]) if len(group) == 3 else group for group in groups]
    return "".join(groups)