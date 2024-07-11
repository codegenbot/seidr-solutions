def decode_shift(s: str):
    if s.startswith('25 '):
        s = s[3:]
    elif s.startswith('26 '):
        s = s[3:]
    result = ""
    for ch in s:
        if 'a' <= ch <= 'z':
            result += chr((ord(ch) - ord('a') + 3) % 26 + ord('a'))
        elif 'A' <= ch <= 'Z':
            result += chr((ord(ch) - ord('A') + 3) % 26 + ord('A'))
        else:
            result += ch
    return result

shift_type = int(input("Enter 1 for 25 shift or 2 for 26 shift: "))
if shift_type == 1:
    shifted_s = input("Enter a shifted string (25): ")
elif shift_type == 2:
    shifted_s = input("Enter a shifted string (26): ")
print(decode_shift(shifted_s))