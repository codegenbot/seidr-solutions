def decode_cyclic(s):
    return s[-1] + s[:-1]

s = input().strip()
result = decode_cyclic(s)
print(result)