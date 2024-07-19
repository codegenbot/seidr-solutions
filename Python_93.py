```
def encode(message):
    encoded_message = ''
    for char in message:
        if char.isalpha():
            if char.isupper():
                if char == 'X':
                    encoded_message += 'A'
                elif char == 'Y' or char == 'Z':
                    encoded_message += 'B' if char == 'Y' else 'C'
                else:
                    encoded_message += chr(ord(char) + 1)
            else:
                if char == 'a':
                    encoded_message += 'b'
                elif char == 'e':
                    encoded_message += 'g'
                elif char == 'i':
                    encoded_message += 'k'
                elif char == 'o':
                    encoded_message += 'q'
                elif char == 'u':
                    encoded_message += 'w'
                else:
                    encoded_message += chr(ord(char) + 1)
        else:
            encoded_message += char
    return encoded_message