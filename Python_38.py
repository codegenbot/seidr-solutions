Here is the completed code:

def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if i % 3 == 0:
            result += s[i]
        elif i % 3 == 1:
            result += s[i - 1]
        else:
            result += s[i]
        i += 1
    return result