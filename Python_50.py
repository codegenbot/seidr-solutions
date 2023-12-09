def decode_shift(s: str) -> str:
    input_string = input("Enter a string to decode: ")
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in input_string.split()])