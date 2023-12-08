
def decode_cyclic(s: str):
    # split the encoded string into groups of three characters
    groups = [s[(3 * i):min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)]
    # reverse the order of each group and join them together
    return "".join([group[::-1] for group in groups])