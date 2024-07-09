```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            ascii_offset = 65 if char.isupper() else 97
            new_char_code = (ord(char) - ascii_offset - 3)
            if new_char_code < 0:
                new_char_code += 26
            elif new_char_code > 25:
                new_char_code -= 26
            result += chr(new_char_code + ascii_offset)
        elif not char.isalnum() and char != ' ':
            result += '*'
        else:
            result += char
    return result

print(encode("I DoNt KnOw WhAt tO WrItE"))