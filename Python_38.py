def decode_cyclic(strings):
    groups = zip(*[iter(strings)]*3)
    return "".join([group[-1] + group[:-1] for group in groups])