```
def decode_shift():
    direction = input("Enter 'encode' to encode or 'decode' to decode: ")
    
    while not isinstance(direction, str):
        direction = input("Invalid input. Enter 'encode' to encode or 'decode' to decode: ")
        
    if direction not in ["encode", "decode"]:
        direction = input("Invalid input. Enter 'encode' to encode or 'decode' to decode: ")
        
    s = input("Enter the string to encode/decode: ")
    
    while not isinstance(s, str):
        s = input("Invalid input. Enter a valid string to encode/decode: ")
        
    is_encoding = direction == "encode"
    result = ""
    for ch in s:
        if ch.isalpha():
            ascii_offset = 97 if ch.islower() else 65
            if is_encoding:
                result += chr((ord(ch) - ascii_offset + 3) % 26 + ascii_offset)
            else:
                result += chr((ord(ch) - ascii_offset - 3) % 26 + ascii_offset)
        else:
            result += ch
    return result