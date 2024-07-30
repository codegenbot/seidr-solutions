def encode_cyclic(s: str):
    groups = [s[(3 * i): min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)]
    groups = [(group[1:] + group[0]) if len(group) == 3 else group for group in groups]
    return "".join(groups)

def decode_cyclic(s: str):
    return "".join(
        [
            (group[-1] + group[:-1]) if len(group) == 3 else group
            for group in [
                s[(3 * i): min((3 * i + 3), len(s)) for i in range((len(s) + 2) // 3)]
        ]
    )

if __name__ == "__main__":
    s = input("Enter string to encode:").strip()
    encoded_output = encode_cyclic(s)
    print(encoded_output)

    s = input("Enter string to decode:").strip()
    decoded_output = decode_cyclic(s)
    print(decoded_output)