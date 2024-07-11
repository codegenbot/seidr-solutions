Here is the completed code:

def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if s[i] == s[-1]:
            j = 2
            while i + j < len(s) and s[i+j] != s[i]:
                j += 1
            result += s[i:i+j][::-1]
            i += j
        else:
            result += s[i:i+3][::-1]
            i += 3
    return result