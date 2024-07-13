def decode_shift(encoded):
    for i in range(26):
        result = "".join([chr(((ord(ch) - 97 + 26 - i) % 26) + 97) if ch.isalpha() else ch for ch in encoded])
        if 'z' not in result and 'Z' not in result:
            return result
    return "No solution"