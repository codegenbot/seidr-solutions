def encode(message):
    vowels = "aeiouAEIOU"
    encoded_message = ""

    for char in message:
        if char.isalpha():
            if char in vowels:
                encoded_message += chr(ord(char) + 2)
            else:
                if char == 'y':
                    encoded_message += 'a'
                elif char == 'Y':
                    encoded_message += 'A'
                else:
                    encoded_message += chr(ord(char) - 31)
        else:
            encoded_message += char

    return encoded_message