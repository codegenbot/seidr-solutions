def decode_shift(s: str):
    s = s.lower()
    shift = int(input("Enter the shift value: "))
    decrypted_string = ""
    for ch in s:
        if ch.isalpha():
            ascii_offset = ord('a') if ch < 'n' else ord('n')
            decrypted_string += chr((ord(ch) - ascii_offset - shift) % 26 + ascii_offset)
        else:
            decrypted_string += ch
    return decrypted_string