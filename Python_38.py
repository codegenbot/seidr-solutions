def decode_cyclic(s: str):
    """
    takes as input string encoded with encode_cyclic function. Returns decoded string.
    """
    groups = [
        s[i : i + 3][1:] + s[i : i + 3][0] if len(s[i : i + 3]) == 3 else s[i : i + 3]
        for i in range(0, len(s), 3)
    ]
    return "".join(groups)