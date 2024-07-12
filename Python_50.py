def decode_shift(s: str):
    decoded = ""
    for ch in s:
        if 'a' <= ch <= 'z':
            decoded += chr((ord(ch) - ord('a') + 23) % 26 + ord('a'))
        elif 'A' <= ch <= 'Z':
            decoded += chr((ord(ch) - ord('A') + 23) % 26 + ord('A'))
        else:
            decoded += ch
    return decoded