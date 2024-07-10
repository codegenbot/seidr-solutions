def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if (i + 3) <= len(s):
            group = s[i : i + 3]
            if len(group) == 2:
                result += group[0] + group[1]
            else:
                result += group[0] + group[1] + group[2]
        else:
            result += s[i:]
            break
        i += 3
    return result