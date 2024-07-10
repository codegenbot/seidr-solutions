Here is the completed code:

def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if i + 3 <= len(s):
            group = s[i:i+3]
            i += 3
        else:
            group = s[i:]
            break
        result += group[-1] + group[:-1]
    return result