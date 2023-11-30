def decode_cyclic():
    s = input()
    return "".join([s[i:i + 3][-1] + s[i:i + 3][:-1] for i in range(0, len(s), 3)])