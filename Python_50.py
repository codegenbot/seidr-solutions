```
def decode_shift():
    s = input("Enter an encoded string: ")
    shift = int(input("Enter the shift value: "))
    result = ""
    for ch in s:
        if ch.isalpha():
            ascii_offset = ord('a') if ch.islower() else ord('A')
            result += chr((ord(ch) - ascii_offset - shift) % 26 + ascii_offset)
        elif ch.isnumeric(): 
            result += ch
        else: 
            result += ch
    return result

print(decode_shift())