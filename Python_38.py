```
def decode_cyclic():
    s = f"{input('Enter the cyclic string: ')}"
    decoded = ""
    for i in range(len(s)):
        if 2*i < len(s):
            decoded += s[2*i]
        else:
            decoded += s[-(i+1)%len(s)]
    return decoded