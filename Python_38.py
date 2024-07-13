Here is the completed code:

def decode_cyclic(s: str):
    result = ''
    i = 0
    while i < len(s):
        if (i + 3) <= len(s):
            result += s[i:i+3][::-1]
        else:
            result += s[i:].reverse().tolist()[0]
        i += 3
    return result