def decode_cyclic():
    s = input()
    k = len(s) // 2
    return "".join(s[(i+k) % len(s)] for i in range(len(s) if s else 0)

result = decode_cyclic()
print(result)