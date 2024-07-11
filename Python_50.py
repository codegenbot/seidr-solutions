def decode_shift(s: str):
    shift = int(input("Enter 1 for '25' or 2 for '26' : "))
    if s.startswith('25 '):
        s = s[3:]
    elif s.startswith('26 '):
        s = s[3:]
    result = ""
    for ch in s:
        if 'a' <= ch <= 'z':
            result += chr((ord(ch) - ord('a') + 25) % 26 + ord('a'))
        elif 'A' <= ch <= 'Z':
            result += chr((ord(ch) - ord('A') + 25) % 26 + ord('A'))
        else:
            result += ch
    return result

shifted_s = input("Enter a shifted string: ")
print(decode_shift(shifted_s))