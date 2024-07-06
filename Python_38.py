
def decode_cyclic(s: str) -> str:
    # split string to groups of three characters
    groups = [s[(3 * i):min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)]
    
    # decode each group by cycling its elements backward
    decoded_groups = [(group[2:] + group[:2]) if len(group) == 3 else group for group in groups]
    
    return "".join(decoded_groups)