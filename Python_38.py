```
def decode_cyclic(s: str):
    decoded = ""
    i = 0
    while i < len(s):
        if i + 2 < len(s) and s[i] == s[i + 1]:
            decoded += s[i]
            i += 3
        else:
            decoded += s[i]
            i += 1
    return decoded