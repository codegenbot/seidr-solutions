```
def decode_cyclic(s: str):
    if s[0] == 'x':
        result = chr(int(s[1:]) + ord('a'))
        return result
    result = ""
    i = 0
    while i < len(s):
        if i + 2 >= len(s) or s[i+1] != 'x':
            result += s[i]
            i += 1
        else:
            result += chr(int(s[i+2]) + ord(s[i]))
            i += 3
    return result