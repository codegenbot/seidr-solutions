def decode_cyclic(s: str):
    groups = [s[(3 * i) : 3 * i + 3] for i in range(len(s) // 3)]
    groups.append(s[(3 * (len(s) // 3)):] + s[:(len(s) % 3)])
    groups = [(group[-1] + group[:-1]) if len(group) == 3 else group for group in groups]
    return "".join(groups)