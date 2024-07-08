def decode_cyclic(input_string):
    groups = [input_string[(3 * i) : min((3 * i + 3), len(input_string))] for i in range((len(input_string) + 2) // 3)]
    groups = [(group[-1] + group[:-1]) if len(group) == 3 else group for group in groups]
    return "".join(groups)

with open('input.txt', 'r') as file:
    encoded_string = file.read().strip()

decoded_string = decode_cyclic(encoded_string)
print(f"Decoded string: {decoded_string}")