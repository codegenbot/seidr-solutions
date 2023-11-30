def decode_cyclic(s):
    return "".join([s[i - 1] + s[i - 2] + s[i] for i in range(1, len(s), 3)])


s = input().strip()
result = decode_cyclic(s)
print(result)