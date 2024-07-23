def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        group = s[i:i+2] if i+1 <= len(s) else s[i:]
        if len(group) == 2:
            result += group[1] + group[0]
        elif len(group) > 0:
            result += group
        i += 2
    return result