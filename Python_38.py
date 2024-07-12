Here is the completed code:

def decode_cyclic(s: str):
    result = ''
    i = 0
    while i < len(s):
        if s[i] != s[-1 - i]: 
            result += s[i]
        i += 1
    return result