def decode_cyclic(encoded_string):
    groups = [
        encoded_string[(3 * i) : min((3 * i + 3), len(encoded_string))]
        for i in range((len(encoded_string) + 2) // 3)
    ]
    groups = [
        (group[-1] + group[:-1]) if len(group) == 3 else group for group in groups
    ]
    return "".join(groups)


encoded_string = input().strip()
decoded_string = decode_cyclic(encoded_string)
print(f"Decoded string: {decoded_string}")