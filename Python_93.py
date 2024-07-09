def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            ascii_offset = 65 if char.isupper() else 97
            shifted_char = (ord(char) - ascii_offset + 3) % 26
            if char.isupper():
                result += chr(65 + shifted_char) if shifted_char else chr(65 + shifted_char).lower()
            else:
                result += chr(97 + shifted_char)
        elif not char.isalnum() and char != ' ':
            result += '*'
        else:
            result += char
    return result

print(encode("I DoNt KnOw WhAt tO WrItE"))