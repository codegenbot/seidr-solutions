def decode_shift(s: str, input_string: str) -> str:
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in input_string.split()])