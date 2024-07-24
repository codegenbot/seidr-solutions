```
def encode(message):
    vowels = 'aeiouAEIOU'
    encoded_message = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                encoded_char = chr((ord(char) - ord(vowels[vowels.index(char.lower())])) % 26 + ord('a'))
            else:
                encoded_char = 'T' if char.upper() == 'T' else 't'
            encoded_message += encoded_char
        else:
            encoded_message += char
    return encoded_message