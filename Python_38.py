s = input().strip()

def decode_cyclic(s):
    return s[::-1]

result = decode_cyclic(s)
print(result)