Here is the completed code:

def decode_cyclic(s: str):
    result = ""
    while len(s) >= 3:
        group = s[:3]
        result += group[1] + group[0]
        s = s[3:]
    if s:
        result += s
    return result