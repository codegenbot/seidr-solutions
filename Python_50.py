def decode_shift(shift=None):
    if shift is None:
        shift = int(input("Enter the shift value: "))
    s = input().upper()
    if not s.isalpha():
        return 
    for ch in s:
        if not ch.isalpha():
            return 
    result = ""
    for ch in s:
        if ch.islower():
            result += chr(((ord(ch) - 97 + shift) % 26) + ord("a"))
        else:
            result += chr(((ord(ch) - 65 + shift) % 26) + ord("A"))
    return result

print(decode_shift())