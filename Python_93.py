```
def encode(message):
    vowels = 'aeiouAEIOU'
    encoded_message = ''
    for char in message:
        if char in vowels:
            index = ord(char) - ord('a')
            encoded_message += chr(ord('a') + (index + 2) % 6)
        else:
            encoded_message += char.swapcase()
    return encoded_message