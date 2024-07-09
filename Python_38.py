def decode_cyclic(s: str):
    groups = [s[(3 * i) : min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)]
    groups = [(group[-1] + group[:2]) if len(group) == 3 else group for group in groups]
    return "".join(groups)

input_string = input("Enter a cyclic string: ")
decoded_string = decode_cyclic(input_string)
print(decoded_string)