def decode_cyclic(s: str):
    groups = [s[i:i + 3] for i in range(0, len(s), 3)
    groups = [(group[-1] + group[:-1]) if len(group) == 3 else group for group in groups]
    return "".join(groups)

input_str = input("Enter the string: ")
result = decode_cyclic(input_str)
print(result)