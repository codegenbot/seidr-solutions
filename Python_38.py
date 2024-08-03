def decode_cyclic(s: str):
    s = input()
    result = ""
    while len(s):
        if len(s) >= 3:
            group = s[:3]
            for char in group[1:]:
                result += char
            if len(group) > 2:
                result += group[0]
            s = s[3:]
        else:
            result += s[0]
            s = s[1:]
    return result