def decode_cyclic(s: str):
    # reverse the cyclic shift in each group. Unless group has fewer elements than 3.
    groups = [(group[-1] + group[:-1]) if len(group) == 3 else group for group in s]
    return "".join(groups)