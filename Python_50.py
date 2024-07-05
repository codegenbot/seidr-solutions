def decode_shift(s: str):
    shift_value = int(input("Enter a shift value (0-25): "))
    return "".join([chr(((ord(ch) - ord('a') + shift_value) % 26) + ord('a')) for ch in s])