```
def decode_shift():
    s = int(input("Enter your shift value: "))
    result = ""
    for ch in input("Enter string to decode: "):
        if ch.isalpha():
            ascii_offset = ord('a') if ch.islower() else ord('A')
            result += chr(((ord(ch) - ascii_offset - s) % 26) + ascii_offset)
        else:
            result += ch
    return result