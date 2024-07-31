```
def encode(message):
    vowels = 'aeiouAEIOU'
    encoded_message = ''
    for char in message:
        if char.isalpha():
            if char.upper() in vowels:
                if char.upper() == 'A':
                    encoded_message += 'C'
                elif char.upper() == 'E':
                    encoded_message += 'G'
                elif char.upper() == 'I':
                    encoded_message += 'K'
                elif char.upper() == 'O':
                    encoded_message += 'Q'
                else:
                    encoded_message += 'U'
            else:
                if char.isupper():
                    encoded_message += chr(ord(char) + 32)
                else:
                    encoded_message += chr(ord(char) - 32)
        else:
            encoded_message += char
    return encoded_message