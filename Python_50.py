def decode_shift(encoded):
    if not encoded[0].isalpha():
        return "No solution"
    for i in range(26):
        result = "".join([chr(((ord(ch) - 97 + 26 - i) % 26) + 97) if ch.isalpha() else ch for ch in encoded])
        if 'z' not in result and 'Z' not in result:
            return result
    return "No solution"