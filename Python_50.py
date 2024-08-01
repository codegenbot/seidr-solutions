def decode_shift(s: str):
    s = input()  # Reading input from the user
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])