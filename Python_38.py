def decode_cyclic(s: str):
    """
    takes as input string encoded with encode_cyclic function. Returns decoded string.
    """
    # reverse the cycling operation to decode the string
    groups = [
        (group[-1] + group[:-1]) if len(group) == 3 else group
        for group in [
            s[(3 * i) : min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)
        ]
    ]
    return "".join(groups)