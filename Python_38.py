def encode_cyclic(s: str):
    groups = [s[(3 * i) : min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)]
    groups = [(group[1:] + group[0]) if len(group) == 3 else group for group in groups]
    return "".join(groups)

def decode_cyclic(s: str):
    return "".join([(group[-1] + group[:-1]) if len(group) == 3 else group for group in [s[(3 * i) : min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)])

if __name__ == "__main__":
    s_encode = input()
    encoded_output = encode_cyclic(s_encode)
    s_decode = input()
    decoded_output = decode_cyclic(s_decode)
    print(encoded_output)
    print(decoded_output)