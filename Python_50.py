def decode_shift(s: str):
    shift = int(input("Enter the shift value: "))
    return "".join([chr((ord(ch.lower()) - 97 + shift) % 26 + 97) if ch.isalpha() else ch for ch in s])