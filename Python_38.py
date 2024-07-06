
def decode_cyclic(s: str) -> str:
    groups = [s[(3 * i):min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)]
    decoded_groups = []
    for group in groups:
        if len(group) == 3:
            decoded_groups.append(group[2:] + group[:2])
        else:
            decoded_groups.append(group)
    return "".join(decoded_groups)