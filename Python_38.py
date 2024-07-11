Here is the completed code:

def decode_cyclic(s: str):
    result = ""
    groups = [s[i:i+3] for i in range(0, len(s), 3)]
    for group in groups:
        if len(group) == 2:
            result += group[1]
        else:
            result += group[0] + group[1] + group[2]
    return result