def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if s[i] == s[-1]:
            result += s[i]
            i += 1
            break
        group = s[i : i + 3]
        if len(group) == 2:
            result += group[1] + group[0]
        else:
            result += group
        i += 3
    return result