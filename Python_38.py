Here is the completed code:

def decode_cyclic(s: str):
    groups = [s[i:i+3] for i in range(0, len(s), 3)]
    groups = [(groups[0][1:] + groups[0][0]) if len(groups[0]) == 3 else groups[0]] + groups[1:]
    return "".join(groups)