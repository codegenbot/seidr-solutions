def decode_shift(s: str):
    shift = int(input("Enter a shift value (1-25): "))
    decoded = ""
    for ch in s:
        if 'a' <= ch <= 'z':
            if ch == 'z':
                decoded += 'a'
            elif ch == 'y':
                decoded += 'e'
            else:
                decoded += chr((ord(ch) - ord('a') - shift) % 26 + ord('a'))
        elif 'A' <= ch <= 'Z':
            if ch == 'Z':
                decoded += 'A'
            elif ch == 'Y':
                decoded += 'E'
            else:
                decoded += chr((ord(ch) - ord('A') - shift) % 26 + ord('A'))
        else:
            decoded += ch
    return decoded