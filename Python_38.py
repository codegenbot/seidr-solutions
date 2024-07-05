
def decode_cyclic(s):
    groups = s[::3]
    return "".join([group[-1] + group[:-1] for group in groups])