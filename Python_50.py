def decode_shift(s: str):
    s = s.lower()
    shift = int(input("Enter the shift value: "))
    return "".join([chr(((ord(ch) - ord('a') + shift) % 26) + 'a' if ch.isalpha() else ch for ch in s])