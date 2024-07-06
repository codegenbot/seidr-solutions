def decode_cyclic(string):
    if len(string) % 3 != 0:
        print("Input string must have a length that is a multiple of 3")
        return None
    groups = [
        string[(3 * i) : min((3 * i + 3), len(string))]
        for i in range((len(string) + 2) // 3)
    ]
    decoded_groups = [
        (group[-1:] + group[:-1]) if len(group) == 3 else group for group in groups
    ]
    return "".join(decoded_groups)