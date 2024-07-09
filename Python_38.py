def decode_cyclic(s):
    n = len(s)
    decoded = ''
    for i in range(n):
        decoded += chr(ord(s[i]) - 1)
    return decoded

s = input().strip()
result = decode_cyclic(s)
print(result)