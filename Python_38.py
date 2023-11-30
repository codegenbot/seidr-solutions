def decode_cyclic():
    s = eval(input())
    return "".join([s[i - 1] + s[i - 2] + s[i] for i in range(1, len(s), 3)])


decode_cyclic()