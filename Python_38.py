Here is the completed code:

def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if i + 2 < len(s) and s[i] == s[i+3]:
            result += s[i:i+3]
            i += 3
        else:
            j = 1
            while j <= len(s) - i and (s[i+j-1] != s[i] or j == 1):
                j += 1
            result += s[i:i+j]
            i += j
    return result