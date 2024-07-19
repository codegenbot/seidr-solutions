def encode(message):
    encoded_message = ""
    vowels = "aeiouAEIOU"
    for char in message:
        if char.isalpha():
            shift = 5 if char.lower() in vowels else 10
            encoded_char_ord = ord(char) + shift
            if char.islower() and encoded_char_ord > ord('z'):
                encoded_char_ord -= 26
            elif char.isupper() and encoded_char_ord > ord('Z'):
                encoded_char_ord -= 26
            encoded_message += chr(encoded_char_ord)
        else:
            encoded_message += char
    return encoded_message