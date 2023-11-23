def decode_cyclic(s: str):
    # split string into groups of three characters
    groups = [s[(3 * i):min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)]
    # reverse the cyclic rotation of the characters in each group
    groups = [(group[-1] + group[:-1]) if len(group) == 3 else group for group in groups]
    # join the groups back to form the decoded string
    return "".join(groups)