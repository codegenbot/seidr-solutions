```
n = int(input("Enter your shift value: "))
def decode_shift(s, n):
    result = ""
    for ch in s:
        if ch.isalpha():
            ascii_offset = ord('a') if ch.islower() else ord('A')
            result += chr(((ord(ch) - ascii_offset - n) % 26) + ascii_offset)
        else:
            result += ch
    return result
print(decode_shift(input("Enter the string to decode: "), n))