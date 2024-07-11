def decode_shift(s: str):
    decoded = ""
    for ch in s:
        if ch.isalpha():
            if ch.islower():
                decoded += chr((ord(ch) - ord('a') + 3) % 26 + ord('a'))
            else:
                decoded += chr((ord(ch) - ord('A') + 3) % 26 + ord('A'))
        else:
            decoded += ch
    return decoded