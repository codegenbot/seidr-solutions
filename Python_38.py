
def decode_cyclic(input_str):
    try:
        groups = [input_str[(3 * i) : min((3 * i + 3), len(input_str))] for i in range((len(input_str) + 2) // 3)]
        decoded_groups = [(group[-1:] + group[:-1]) if len(group) == 3 else group for group in groups]
        return "".join(decoded_groups)
    except (ValueError, IndexError):
        print("Invalid input")
        return None