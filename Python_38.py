def decode_cyclic(strings):
    groups = [s[(3 * i):min((3 * i + 3), len(s))] for s in strings for i in range((len(s) + 2) // 3)]
    return ["".join([group[::-1] for group in groups]) for _ in strings]