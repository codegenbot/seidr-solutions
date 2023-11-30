def decode_cyclic():
    s = "abcxyz"  # replace with the test input string
    return "".join([s[i - 1] + s[i - 2] + s[i] for i in range(0, len(s), 3)])

decode_cyclic()