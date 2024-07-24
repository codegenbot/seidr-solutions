s = input()

def decode_cyclic(s: str):
    groups = [s[(2 * i) : min((2 * i + 2), len(s))] for i in range((len(s) + 1) // 2)]
    groups = [
        (group[-1] + group[:-1]) if len(group) == 2 else group for group in groups
    ]
    return "".join(groups)

print(decode_cyclic(s))