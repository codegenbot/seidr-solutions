def decode_shift(s: str):
    shift = int(input("Enter the shift value: "))
    return "".join([chr(((ord(ch.lower()) - ord('a') + shift) % 26) + ord('a')) if ch.isalpha() else ch for ch in s]).lower()