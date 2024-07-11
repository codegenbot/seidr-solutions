def decode_cyclic(s: str):
    result = ""
    i = 0
    if len(s) % 3 != 0:
        group = s[:len(s)%3]
        if len(group) == 1:
            result += group[0]
        elif len(group) == 2:
            result += group[1] + group[0]
        else:
            result += group
    i = len(s)%3
    while i < len(s):
        if i + 3 <= len(s):
            group = s[i : i + 3]
        else:
            group = s[i:]
        if len(group) == 1:
            result += group[0]
        elif len(group) == 3:
            result += group[1] + group[0] + group[2]
        else:
            result += group
        i += 3
    return result