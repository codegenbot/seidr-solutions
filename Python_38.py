Here is the completed code:

def decode_cyclic(s: str):
    result = []
    i = 0
    while i < len(s):
        if i + 3 <= len(s):
            group = s[i:i+3]
            result.append(group[1:] + group[0])
        else:
            result.append(s[i:])
            break
        i += 3
    return "".join(result)