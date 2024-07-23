``` 
def decode_shift(s: str):
    result = ""
    shift = 0
    for char in s:
        if char.isalpha():
            ascii_offset = ord('a') if char.islower() else ord('A')
            result += chr((ord(char) - ascii_offset + shift) % 26 + ascii_offset)
        elif char == ' ':
            result += ' '
        else:
            result += char
        if char.isdigit():
            shift = int(char)
    return result