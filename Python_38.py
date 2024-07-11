```
def decode_cyclic(s: str):
    result = ''
    i = 0
    while i < len(s):
        if (i + 3) <= len(s):
            result += s[i:i+3][::-1]
        else:
            result += s[i:].reverse().tolist()[0].decode('utf-8')
        i += 3
    return result