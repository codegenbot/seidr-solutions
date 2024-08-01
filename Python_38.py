```
def decode_cyclic(s: str):
    result = ""
    while len(s) > 1:
        if s[0] != s[-1]:
            result += s[0]
        else:
            result += s[:len(s)//2] + s[-1]
        s = s[len(s)//2:]
    return result + s