def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        group = s[i : i + 3]
        if len(group) == 1:
            result += group[0] + s[:i].rjust(2, group[0]) + s[i + 1 :]
            break
        elif len(group) == 2:
            result += group[1] + group[0] + s[i + 2 :]
            i += 1
        else:
            result += group[1:] + group[0]
        i += 3
    return result