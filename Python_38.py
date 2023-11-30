def decode_cyclic():
    s = input().strip()
    return "".join([s[(i - 1) % len(s)] + s[(i - 2) % len(s)] + s[i % len(s)] for i in range(1, len(s) + 1, 3)])


decode_cyclic()