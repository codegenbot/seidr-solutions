```
def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            if char.lower() == 'a' or char.lower() == 'e' or char.lower() == 'i' or char.lower() == 'o' or char.lower() == 'u':
                if char.lower() == 'a':
                    encoded_message += 'c'
                elif char.lower() == 'e':
                    encoded_message += 'g'
                elif char.lower() == 'i':
                    encoded_message += 'k'
                elif char.lower() == 'o':
                    encoded_message += 's'
                elif char.lower() == 'u':
                    encoded_message += 'y'
            else:
                if char.islower():
                    encoded_message += chr((ord(char) - 97 + 2) % 26 + 97)
                else:
                    encoded_message += chr((ord(char) - 65 + 2) % 26 + 65)
        else:
            encoded_message += char
    return encoded_message