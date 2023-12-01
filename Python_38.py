def encode_cyclic(s: str):
    groups = [s[(3 * i) : min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)]
    groups = [(group[1:] + group[0]) if len(group) == 3 else group for group in groups]
    return "".join(groups)


def decode_cyclic(s: str):
    groups = [s[(3 * i) : min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)]
    groups = [
        (group[-1] + group[:-1]) if len(group) == 3 else group for group in groups
    ]
    return "".join(groups)


# Get input from user
input_string = input("Enter a string: ")

# Encode string
encoded_string = encode_cyclic(input_string)
print("Encoded string:", encoded_string)

# Decode string
decoded_string = decode_cyclic(encoded_string)
print("Decoded string:", decoded_string)