def decode_cyclic(s: str):
    if len(s) % 3 != 0:
        s += " " * (3 - len(s) % 3)
    groups = [s[(3 * i) : (3 * (i + 1))] for i in range(len(s) // 3)]
    groups = [(group[-1] + group[:-1]) for group in groups]
    return "".join(groups)

s = "<input string>"
result = decode_cyclic(s)
print("Decoded String:", result)