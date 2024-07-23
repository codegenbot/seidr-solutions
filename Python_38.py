```
def decode_cyclic(s: str):
    result = ''
    i = 0
    while i < len(s):
        if i + 2 <= len(s):
            if i == len(s) - 1:
                result += s[i]
            else:
                result += s[i:i+2][::-1]
        else:
            result += s[i:]
        i += 3
    return result