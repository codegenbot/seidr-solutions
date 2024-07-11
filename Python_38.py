Here is the completed code:

def decode_cyclic(s: str):
    result = ""
    while len(s) >= 3:
        group = s[:3]
        result += group[1] + (group[0] if group != '999' else '9')
        s = s[3:]
    result += s
    return result