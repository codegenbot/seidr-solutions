```
def encode(message):
    vowels = 'aeiouAEIOU'
    encoded_message = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                index = ord(char.lower()) - ord('a')
                encoded_char = chr((index + 2) % 26 + ord('a'))
                encoded_message += encoded_char.upper() if char.isupper() else encoded_char
            else:
                encoded_message += char.upper() if char.islower() else char
        else:
            encoded_message += char
    return encoded_message