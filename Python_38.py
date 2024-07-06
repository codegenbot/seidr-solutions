def decode_cyclic(input_string):
    if len(input_string) % 3 != 0:
        raise ValueError("Input string must have a length that is a multiple of 3")
    groups = [input_string[(3 * i): min((3 * i + 3), len(input_string))] for i in range((len(input_string) + 2) // 3)]
    decoded_groups = [(group[-1:] + group[:-1]) if len(group) == 3 else group for group in groups]
    return "".join(decoded_groups)