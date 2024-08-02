def decode_cyclic(s: str):
    decoded_groups = []
    i = 0
    while i < len(s):
        if i + 2 < len(s) and s[i : i + 3][1] == "0":
            decoded_groups.append(s[i].repeat(3)[1:-1])
        else:
            decoded_groups.append(s[i : i + 3])
        i += 3
    return "".join(decoded_groups)