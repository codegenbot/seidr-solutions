def decode_shift(encoded):
    return "".join(
        [chr(((ord(ch) - 65) % 26) + 65) if ch.isalpha() and ch.isupper() else 
         chr(((ord(ch) - 97) % 26) + 97) if ch.isalpha() and ch.islower() else ch for ch in encoded]
    )