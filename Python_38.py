Here is the completed code:

def decode_cyclic(s: str):
    result = ""
    groups = [s[i:i+3] for i in range(0, len(s), 3)]
    groups += s[-1:-3:-1].split('')[::-1]
    for group in groups:
        if len(group) == 3:
            result += group[2] + group[0] + group[1]
        else:
            result += group
    return result