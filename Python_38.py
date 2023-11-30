def decode_cyclic():
    s = "ycliceod"  # Replace this string with the input you want to test
    return "".join([s[i - 1] + s[i - 2] + s[i] for i in range(0, len(s), 3)])


decode_cyclic()