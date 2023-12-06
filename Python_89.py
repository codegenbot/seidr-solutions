```
def encrypt(s):
    enc = ''
    for c in s:
        if c.isalpha():
            enc += chr((ord(c) - ord('a') + 2) % 26 + ord('a'))
        else:
            enc += c
    return enc
```