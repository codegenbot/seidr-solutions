def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            ascii_offset = 65 if char.isupper() else 97
            result += chr((ord(char) - ascii_offset + 3) % 26 + ascii_offset)
        elif not char.isalnum() and char != ' ':
            result += '*'
        else:
            result += char
    return result

print(encode("""I DoNt KnOw WhAt tO WrItE"""))