Here is the completed code:

def decode_cyclic(s: str):
    result = ""
    while s:
        if len(s) >= 3:
            result += s[:2] + s[-1]
            s = s[2:]
        else:
            result += s
            s = ""
    return result