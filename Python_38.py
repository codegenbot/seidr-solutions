
def decode_cyclic(s: str) -> str:
    s = input("Enter a string to decode: ")
    decoded_groups = [(group[-1:] + group[:-1]) if len(group) == 3 else group for group in groups]
    return "".join(decoded_groups)