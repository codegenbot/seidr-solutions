def decode_shift(s: str):
    result = ""
    for ch in s:
        if ch.isalpha():
            ascii_offset = ord('a') if ch.islower() else ord('A')
            result += chr((ord(ch) - ascii_offset - 5) % 26 + ascii_offset)
        else:
            result += ch
    return result

shift = int(input("Enter the shift value: "))
s = input("Enter the string to decode: ")
print(decode_shift(s))