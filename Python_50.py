```
def decode_shift(s: str):
    shift = int(input("Enter the shift value: "))
    decoded = ""
    for ch in s:
        if ch.isalpha():
            if ch.islower():
                decoded += chr((ord(ch) - ord('a') - shift) % 26 + ord('a'))
            else:
                decoded += chr((ord(ch) - ord('A') - shift) % 26 + ord('A'))
        else:
            decoded += ch
    return decoded