def decode_cyclic(s: str):
    groups = [s[i:i + 3] for i in range(0, len(s), 3)]
    groups = [(group[-1] + group[:-1]) if len(group) == 3 else group for group in groups]
    return "".join(groups)

try:
    s = input("Enter the string: ")
    if len(s) % 3 != 0:
        raise ValueError("Input string length must be a multiple of 3.")
    result = decode_cyclic(s)
    print(result)
except ValueError as e:
    print(e)