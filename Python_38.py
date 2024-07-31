def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if i + 3 <= len(s):
            group = s[i : i + 3]
            if group[0] == group[2]:
                result += group[0]
                i += 3
            else:
                result += group[1]
                i += 1
        else:
            result += s[i]
            i += 1
    return result