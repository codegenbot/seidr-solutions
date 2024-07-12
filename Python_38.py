def decode_cyclic(s: str):
    groups = [s[i:i+3] for i in range(0, len(s), 3)]
    rotated_groups = [(group[-1] + group[:-1]) for group in groups]
    return "".join(rotated_groups)

input_string = input()
result = decode_cyclic(input_string)
print(result)