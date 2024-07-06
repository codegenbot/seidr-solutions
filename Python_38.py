Here is the completed code:

def decode_cyclic(s: str):
    result = ''
    while len(s) >= 3:
        group = s[:3]
        if len(group[0]) > 1 and group[0][0] == group[1][0]:
            result += group[0][0]
        else:
            result += group[0] + group[1] + group[2]
        s = s[3:]
    result += s
    return result