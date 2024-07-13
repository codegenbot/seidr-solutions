def encrypt(s):
    result = ""
    for char in s:
        if char.isalpha():
            offset = 65 if char.isupper() else 97
            shift = 3 if not char.isupper() else 0
            new_char_code = (ord(char) - offset + shift) % 26 + offset
            result += chr(new_char_code)
        elif char.isdigit():
            result += char
        elif char in '/.:!?,";\'-_:':
            result += char
        else:
            result += '#'
    return result