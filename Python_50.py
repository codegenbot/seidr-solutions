def decode_shift():
    s = input("Enter an encoded string: ")
    shift = int(input("Enter the shift value: "))
    result = ""
    for ch in s:
        if ch.isalpha():
            ascii_offset = ord('a') if ch.islower() else ord('A')
            if shift > 0:
                result += chr((ord(ch) - ascii_offset - (shift % 26)) % 26 + ascii_offset)
            else:
                result += chr((ord(ch) - ascii_offset + abs(shift) % 26)) % 26 + ascii_offset
        else:
            result += ch
    return result

print(decode_shift())