```
def encode(message):
    vowels = 'aeiou'
    encoded_message = ''
    index = 0
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                if index % 2 == 0:
                    encoded_message += chr(ord('a') + (index) % 6)
                else:
                    encoded_message += chr(ord('A') + (index) % 6)
            else:
                encoded_message += char.swapcase()
            index += 1
        else:
            encoded_message += char
    return encoded_message