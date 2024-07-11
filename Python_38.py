Here is the completed code:

def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if i + 2 < len(s) and s[i] == s[i+2]:
            j = 3
            while i + j < len(s) and s[i] == s[i+j]:
                j += 3
            result += s[i].repeat(j//3)
            i += j
        else:
            result += s[i]
            i += 1
    return result