def decode_shift(s: str):
    decoded = ""
    for ch in s:
        if 'a' <= ch <= 'z':
            decoded += chr((ord(ch) - 5 - ord('a')) % 26 + ord('a'))
        elif 'A' <= ch <= 'Z':
            decoded += chr((ord(ch) - 5 - ord('A')) % 26 + ord('A'))
        else:
            decoded += ch
    return decoded