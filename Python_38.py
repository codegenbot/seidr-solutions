def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if s[i] == s[-1]:
            result += s[i]
            i += 2
        else:
            result += s[i]
            i += 1
    return result