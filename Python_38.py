def decode_cyclic(strings):
    # Combine the input strings into groups of three
    groups = zip(*[iter(strings)]*3)
    # Join each group into a single string
    return "".join([group[-1] + group[:-1] for group in groups])