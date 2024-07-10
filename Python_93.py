def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            ascii_offset = 97 if char.islower() else 65
            if 'aeiouAEIOU'.find(char.lower()) != -1:
                shift_value = 3
            else:
                shift_value = ord('a' if char.islower() else 'A') - ascii_offset

            result += chr((ord(char) - ascii_offset + shift_value) % 26 + ascii_offset).upper() if char.isupper() else chr((ord(char) - ascii_offset + shift_value) % 26 + ascii_offset)
        else:
            result += char
    return result