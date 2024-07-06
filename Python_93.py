```
def encode(message):
    vowels = 'aeiouAEIOU'
    encoded_message = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                index = ord(char.lower()) - ord('a')
                encoded_message += chr((index + 2) % 26 + ord('a')) if char.islower() else chr((index + 2) % 26 + ord('A'))
            else:
                encoded_message += char
        else:
            encoded_message += char
    return encoded_message