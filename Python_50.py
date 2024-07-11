```
def decode_shift(s: str):
    decoded = ""
    shift = 0
    for ch in s:
        if ch.isalpha():
            if ch.islower():
                decoded += chr((ord(ch) - ord('a') - shift) % 26 + ord('a'))
            else:
                decoded += chr((ord(ch) - ord('A') - shift) % 26 + ord('A'))
        elif ch.isdigit():
            decoded += chr(int(ch) - shift)
        else:
            decoded += ch
    return decoded