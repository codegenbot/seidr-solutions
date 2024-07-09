def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            ascii_offset = 65 if char.isupper() else 97
            shift_amount = 3
            new_char_code = ord(char) - (ord('A') if char.isupper() else ord('a'))
            new_char_code %= 26
            new_char_code += shift_amount

            if new_char_code < 0:
                new_char_code += 26
                
            result += chr(new_char_code + ascii_offset) if char.isupper() else chr(new_char_code + 32)
        elif not char.isalnum() and char != ' ':
            result += '*'
        else:
            result += char
    return result

print(encode("I DoNt KnOw WhAt tO WrItE"))