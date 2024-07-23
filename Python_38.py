Here is the completed code:

def decode_cyclic(s: str):
    result = ""
    while len(s) >= 3:
        group = s[:3]
        new_group = group[1] + group[0] + group[2]
        result += new_group
        s = s[3:]
    if s:
        result += s
    return result