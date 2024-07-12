Here is the completed code:

def decode_cyclic(s: str):
    result = []
    i = 0
    while i < len(s):
        if len(result) >= 3:
            result.pop(0)
        else:
            result.append(s[i])
        i += 1
    return "".join(result)