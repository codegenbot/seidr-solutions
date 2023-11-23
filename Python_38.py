def decode_cyclic(s: str):
    groups = [s[(3 * i) : (3 * (i + 1))] for i in range(len(s) // 3)]
    groups = [(group[-1] + group[:-1]) for group in groups]
    return "".join(groups)

s = input("Enter a string (length should be a multiple of 3): ")
if len(s) % 3 != 0:
    print("Invalid input! Length should be a multiple of 3.")
else:
    s = s.ljust((len(s) // 3 + 1) * 3)
    result = decode_cyclic(s)
    print("Decoded String:", result)