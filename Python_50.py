def decode_shift(s: str):
    key = int(input("Enter a shift key (1-25): "))
    decoded = ""
    for ch in s:
        if 'a' <= ch <= 'z':
            decoded += chr((ord(ch) - ord('a') - key) % 26 + ord('a'))
        elif 'A' <= ch <= 'Z':
            decoded += chr((ord(ch) - ord('A') - key) % 26 + ord('A'))
        else:
            decoded += ch
    return decoded