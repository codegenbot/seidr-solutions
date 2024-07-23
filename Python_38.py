def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if i + 1 < len(s) and s[i] == s[i+1]:
            i += 2
        else:
            if i > 0 and s[i-1] == s[i]:
                continue
            result += s[i]
        i += 1
    return result