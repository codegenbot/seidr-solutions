Here is the completed code:

def decode_cyclic(s: str):
    result = ""
    while len(s) > 0:
        if len(s) >= 3:
            group = s[:3]
            s = s[3:]
            result += group[-1] + group[1:-1][::-1] + group[0]
        else:
            result += s[::-1]
            break
    return result