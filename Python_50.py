def decode_shift(s: str):
    shift = int(input("Enter the shift value: "))
    return "".join([chr(((ord(ch.lower()) - ord('a')) + shift) % 26) + (ch.isalpha() and 'a' or '').upper() if ch.isupper() else (ch.isalpha() and 'a' or '') for ch in s])