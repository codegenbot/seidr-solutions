Here is the completed code:

def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if i % 3 == 0:
            result += s[i]
        else:
            result += s[i-1]
        i += 1
    return result