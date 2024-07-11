def encode(message):
    vowels = 'aeiouAEIOU'
    encoded_message = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                index = (ord(char.lower()) - ord('a') + 2) % 26
                encoded_char = chr(ord('a') + index)
                encoded_message += encoded_char if char.isupper() else encoded_char.lower()
            else:
                if char.islower():
                    encoded_message += chr((ord(char) - ord('a') + 1) % 26 + ord('a'))
                else:
                    encoded_message += chr((ord(char) - ord('A') + 1) % 26 + ord('A'))
        else:
            encoded_message += char
    return encoded_message