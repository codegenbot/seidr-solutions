Here is the completed code:

def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if i + 3 <= len(s):
            group = s[i:i+3]
        else:
            group = s[i:]
        if len(group) == 1 or (len(group) > 1 and group[0] == group[-1]):
            result += group
        else:
            result += group[1] + group[0]
        i += 3
    return result