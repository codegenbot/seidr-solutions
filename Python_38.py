def decode_cyclic(strings):
    groups = [[s[3 * i:min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)] for s in strings]
    return ["".join([group[::-1] for group in g]) for g in groups]