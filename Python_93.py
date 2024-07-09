def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            ascii_offset = ord('A') if char.isupper() else ord('a')
            result += chr((ord(char) - ascii_offset + 3) % 26 + ascii_offset)
        elif char.isdigit():  
            result += char
        elif not char.isalnum() and char != ' ':  
            result += '*'
        else:
            result += '*'