def decode_cyclic(s: str):
    s = input()
    result = ""
    while len(s):
        if len(s) >= 3:
            group = s[:3]
            if len(group) == 1:
                result += group[0]
                s = s[1:]
            elif len(group) > 2:
                result += group[1] + group[0]
                s = s[3:]
            else:
                result += group[1]
                s = s[2:]
        else:
            result += s[0]
            s = s[1:]
    return result