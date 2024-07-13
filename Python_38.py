Here is the completed code:

def decode_cyclic(s: str):
    result = ""
    for group in s[::2] + s[1::2]:
        if len(group) == 3:
            result += group[0] + group[1]
        else:
            result += group
    return result