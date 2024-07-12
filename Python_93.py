def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                offset = ord('a') + 2
                if char.lower() == 'a' and ord(char) > offset:
                    encoded_message += chr(ord('z') - (offset - ord('a')) + 1)
                elif char.lower() == 'e' and ord(char) > offset:
                    encoded_message += chr(ord('i') - (offset - ord('a')))
                else:
                    encoded_message += chr(min(offset, ord('z') if ord(char) < offset else ord('a')) + 1)
            else:
                if char.isupper():
                    encoded_message += chr((ord(char.lower()) + 1) % 26 + ord('A'))
                else:
                    encoded_message += chr((ord(char) + 1) % 26 + ord('a'))
        else:
            encoded_message += char
    return encoded_message