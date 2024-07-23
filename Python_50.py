def decode_shift(s: str):
    shift = int(input("Enter the shift value: "))
    return "".join([chr(((ord(ch) - ord('a')) % 26) + ord('a')) for ch in s])