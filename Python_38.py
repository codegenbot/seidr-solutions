def decode_cyclic(s):
    decoded = ""
    for i in range(len(s)):
        group = s[i : i + 3]
        if len(group) == 3:
            decoded += group[1:] + group[0]
        else:
            decoded += group
    return decoded