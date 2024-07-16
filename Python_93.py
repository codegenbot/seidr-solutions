def encode(message):
    result = ""
    for char in message:
        if char.isspace():
            result += char
        elif not char.isalpha():
            result += char
        else:
            if char.isupper():
                shifted_char_code = ((ord(char) - 65 + 3) % 26 + 65)
            else:
                shifted_char_code = ((ord(char) - 97 + 3) % 26 + 97)
            result += chr(shifted_char_code)
    return result