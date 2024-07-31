def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                if char == 'X' or char == 'x':
                    encoded_message += 'A' if char == 'X' else 'a'
                else:
                    encoded_message += chr(ord(char) + 1)
            elif char.lower() in 'aeiou':
                if char.lower() == 'e':
                    encoded_message += 'g'
                elif char.lower() == 'o':
                    encoded_message += 'q'
                elif char.lower() == 'i':
                    encoded_message += 'k'
                elif char.lower() == 'u':
                    encoded_message += 'w'
                else:
                    encoded_message += chr(ord(char) + 2)
            else:
                encoded_message += char
        else:
            encoded_message += char
    return encoded_message