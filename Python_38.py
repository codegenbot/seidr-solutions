def decode_cyclic(s: str) -> str:
    groups = [s[(3 * i):min((3 * i + 3), len(s))] for i in range(len(s) // 3 + 1)]
    groups = [(group[-1] + group[:-1]) if len(group) == 3 else group for group in groups]
    return "".join(groups)

input_str = input("Enter a string: ")
print(decode_cyclic(input_str))