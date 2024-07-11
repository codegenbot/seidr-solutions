```
def decode_shift(s: str):
    if s.startswith('25 ') or s.startswith('26 '):
        shift = int(s[:3])
        s = s[3:]
    else:
        while True:
            try:
                shift = int(input("Enter the shift value (1-25): "))
                if 0 < shift <= 25:
                    break
                print("Invalid input. Please enter a number between 1 and 25.")
            except ValueError:
                print("Invalid input. Please enter a number.")
    result = ""
    for ch in s:
        if 'a' <= ch <= 'z':
            result += chr((ord(ch) - ord('a') + shift) % 26 + ord('a'))
        elif 'A' <= ch <= 'Z':
            result += chr((ord(ch) - ord('A') + shift) % 26 + ord('A'))
        else:
            result += ch
    return result

shifted_s = input("Enter a shifted string (25 or 26 ): ")
print(decode_shift(shifted_s))