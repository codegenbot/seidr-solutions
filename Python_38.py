Here is the completed code:

def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if (i+3) <= len(s):
            group = s[i:i+3]
        else:
            group = s[i:]
        if len(group) == 1:
            result += group[0] + group[0] + '0'
        elif len(group) == 2:
            result += group[0] + group[1]
        i += 3
    return result