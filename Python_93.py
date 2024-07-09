def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                ascii_offset = 65
            else:
                ascii_offset = 97
            result += chr((ord(char) - ascii_offset + 3) % 26 + ascii_offset)
        elif not char.isalnum() and char != ' ':
            result += char
        else:
            result += char
    return result

print(encode("I DoNt KnOw WhAt tO WrItE"))