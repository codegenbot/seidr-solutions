```
def decode_shift(s: str):
    if s.startswith('25 ') or s.startswith('26 '):
        shift = int(s[:3])
        s = s[3:]
    else:
        shift = int(input("Enter the shift value (1-25): "))
    result = ""
    for ch in s:
        if 'a' <= ch <= 'z':
            result += chr((ord(ch) - ord('a') + shift) % 26 + ord('a'))
        elif 'A' <= ch <= 'Z':
            result += chr((ord(ch) - ord('A') + shift) % 26 + ord('A'))
        else:
            result += ch
    return result

print(decode_shift(input("Enter a shifted string (25 or 26 ): ")))