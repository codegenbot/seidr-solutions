def encode(message):
    encoded_message = ''
    vowels = 'aeiouAEIOU'
    for char in message:
        if char.isalpha():
            if char.lower() == 'z' or char.lower() == 'Z':
                encoded_message += 'a' if char.islower() else 'A'
            elif char.lower() in vowels:
                encoded_message += chr(ord(char) + 2)
            else:
                encoded_message += chr(ord(char) - 1)
        else:
            encoded_message += char
    return encoded_message