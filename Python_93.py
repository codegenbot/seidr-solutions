```
def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                if char.lower() == 'a':
                    encoded_message += 'c'
                elif char.lower() == 'e':
                    encoded_message += 'g'
                elif char.lower() == 'i':
                    encoded_message += 'k'
                elif char.lower() == 'o':
                    encoded_message += 'q'
                elif char.lower() == 'u':
                    encoded_message += 'y'
            else:
                if char.isupper():
                    encoded_message += chr((ord(char) - 65 + 3) % 26 + 65)
                else:
                    encoded_message += chr((ord(char) - 97 + 3) % 26 + 97)
        else:
            encoded_message += char
    return encoded_message