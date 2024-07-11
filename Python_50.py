def decode_shift(s: str):
    shift = int(input("Enter the Caesar cipher shift: "))
    result = ""
    for char in s:
        if char.isalpha():
            ascii_offset = 97 if char.islower() else 65
            result += chr((ord(char) - ascii_offset + shift) % 26 + ascii_offset)
        else:
            result += char
    return result