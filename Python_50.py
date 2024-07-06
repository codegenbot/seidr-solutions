```
def decode_shift(direction):
    if direction not in ["encode", "decode"]:
        return "Invalid input. Enter 'encode' to encode or 'decode' to decode: "
    
    s = input("Enter the string to encode/decode: ")
    
    is_encoding = direction == "encode"
    result = ""
    for ch in s:
        if ch.isalpha():
            ascii_offset = 97 if ch.islower() else 65
            if is_encoding:
                if ch.islower():
                    result += chr((ord(ch) - ascii_offset + 3) % 26 + ascii_offset)
                elif ch.isupper():
                    result += chr((ord(ch) - ascii_offset + 3) % 26 + ascii_offset).upper()
            else:
                if ch.islower():
                    result += chr((ord(ch) - ascii_offset - 3) % 26 + ascii_offset)
                elif ch.isupper():
                    result += chr((ord(ch) - ascii_offset - 3) % 26 + ascii_offset).upper()
        else:
            result += ch
    return result

def main():
    direction = input("Enter 'encode' or 'decode': ")
    print(decode_shift(direction))