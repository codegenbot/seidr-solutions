
def decode_shift(s: str):
    user_input = input("Enter a string to shift: ")
    return "".join([chr((ord(ch) - 5 - ord("a")) % 26 + ord("a")) for ch in s])