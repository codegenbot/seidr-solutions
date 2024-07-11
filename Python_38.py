def decode_cyclic(s: str):
    result = ''
    i = 0
    while i < len(s):
        if i+2 < len(s) and s[i:i+3][0] == s[i+2]:
            result += s[i+1]
            i += 3
        else:
            result += s[i]
            i += 1
    return result