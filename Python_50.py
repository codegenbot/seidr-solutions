def decode_shift(n: int) -> str:
    user_input = input("Enter a string to decode: ")
    s = "".join([chr((ord(ch) - 5 - ord("a")) % 26 + ord("a")) for ch in user_input])
    return s