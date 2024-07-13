def decode_shift(encoded):
    return "".join([ (chr(((ord(ch) - ord("a")) + 26 - 5) % 26) + ord("a")) if ch.isalpha() and ch.lower() >= "a" and ch.lower() <= "z" else ch for ch in encoded])