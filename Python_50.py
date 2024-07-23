```
def decode_shift(s: str):
    shift = int(input("Enter the shift value: "))
    decoded_s = ""
    for ch in s:
        if ch.isalpha():
            ascii_offset = ord('a') if ch.islower() else ord('A')
            decoded_ch = chr((ord(ch) - ascii_offset - shift) % 26 + ascii_offset)
            decoded_s += decoded_ch
        else:
            decoded_s += ch
    return decoded_s