def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if i + 1 <= len(s):
            group = s[i:i+3] if len(s) - i >= 2 else s[i:]
        else:
            group = s[i:]
        if len(group) == 4:
            result += group[2] + group[0:2]
        elif len(group) == 3:
            if group[1] != group[0]:
                result += group[1] + group[0]
            else:
                result += group
        else:
            result += group
        i += 3
    return result