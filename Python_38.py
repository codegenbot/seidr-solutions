def encode_cyclic(s: str):
    s = input("Enter the string to encode: ")
    groups = [s[(3 * i) : min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)]
    groups = [(group[1:] + group[0]) if len(group) == 3 else group for group in groups]
    encoded_string = "".join(groups)
    print("Encoded string:", encoded_string)


def decode_cyclic(s: str):
    s = input("Enter the string to decode: ")
    groups = [s[(3 * i) : min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)]
    groups = [
        (group[-1] + group[:-1]) if len(group) == 3 else group for group in groups
    ]
    decoded_string = "".join(groups)
    print("Decoded string:", decoded_string)