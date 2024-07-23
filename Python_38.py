def decode_cyclic(s: str):
    n = len(s)
    result = ""
    i = 0
    while i < n:
        if i + 1 < n and s[i] == s[i+1]:
            j = 2
            while i + j < n and s[i] == s[i+j]:
                j += 1
            result += s[i]
            i += j
        else:
            result += s[i]
        i += 1
    return result