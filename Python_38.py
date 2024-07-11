def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if (i + 3) <= len(s):
            group = s[i : i + 3]
            if i > 0:
                if len(group) == 1:
                    result += s[: i - 2] + group[0]
                else:
                    result += group[1:] + group[0]
            else:
                result += group
        else:
            result += s[i:]
        i += 3
    return result