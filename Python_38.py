def encode_cyclic(s: str):
    groups = [s[(3 * i) : min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)]
    groups = [(group[1:] + group[0]) if len(group) == 3 else group for group in groups]
    return "".join(groups)


def decode_cyclic(s: str):
    s += "XXX"  # add enough X's to make the length a multiple of 3
    res = ""
    for i in range(len(s) // 3 * 3, -1, -3):
        res += s[i - 2 : i] + s[i - 3 : i - 2]
    return res[:-3]  # remove extra X's added at the beginning