
def decode_cyclic(s):
    # Pad input string with spaces to ensure length is a multiple of 3
    while len(s) % 3 != 0:
        s += " "
    groups = [s[i : i + 3] for i in range(0, len(s), 3)]
    decoded_groups = [(group[1:] + group[0]) if len(group) == 3 else group for group in groups]
    return "".join(decoded_groups)