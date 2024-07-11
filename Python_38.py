Here is the completed code:

def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        group = s[i:i+3]
        if len(group) == 3:
            result += group[1] + group[0]
        else:
            result += group
        i += 3
    return result