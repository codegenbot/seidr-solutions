Here is the completed code:

def decode_cyclic(s: str):
    result = ""
    while len(s) >= 3:
        group = s[:3]
        if len(group[0]) == 1 and len(group[1]) == 1 and len(group[2]) == 1:
            result += ''.join([group[2], group[0], group[1]])
        else:
            result += group
        s = s[3:]
    if s:
        result += s
    return result