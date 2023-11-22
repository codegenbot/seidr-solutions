def decode_cyclic(input_string: str) -> str:
    groups = [input_string[(3 * i):min((3 * i + 3), len(input_string))] for i in range((len(input_string) + 2) // 3)]
    groups = [(group[-1] + group[:-1]) if len(group) == 3 else group for group in groups]
    return "".join(groups)