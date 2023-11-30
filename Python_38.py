def decode_cyclic():
    s = input("Enter the string: ").strip()
    return "".join([s[i - 1] + s[i - 2] + s[i] for i in range(0, len(s), 3)])

decode_cyclic()