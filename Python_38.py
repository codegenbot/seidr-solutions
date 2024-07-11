```
def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if i < len(s) - 2 and s[i+2] == s[i]:
            j = 3
            while j > 1 and s[i+j-1] == s[i]:
                j += 1
            result += s[i] * (j // 3)
            i += j
        else:
            result += s[i]
            i += 1
    return result