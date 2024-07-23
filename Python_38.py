def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        group = s[i:i+3] if i+2 <= len(s) else s[i:]
        if len(group) > 0:
            if len(group) == 1 or (len(group) == 3 and group[0] == group[2]):
                result += group
            elif group[1] != group[0]:
                result += group[1]
        i += 1
    return result