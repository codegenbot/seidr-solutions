```
def decode_shift(s: str):
    shift = int(input("Enter the shift value: "))
    decoded = ""
    for ch in s:
        if 'a' <= ch <= 'z':
            decoded += chr((ord(ch) - shift - ord('a')) % 26 + ord('a'))
        elif 'A' <= ch <= 'Z':
            decoded += chr((ord(ch) - shift - ord('A')) % 26 + ord('A'))
        else:
            decoded += ch
    return decoded