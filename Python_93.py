def encode(message):
    vowels = 'aeiouAEIOU'
    encoded_message = ''
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                if ord(char) - ord('a') % 2 == 0:
                    encoded_message += chr(ord('a') + (ord(char) - ord('a')) % 6)
                else:
                    encoded_message += chr(ord('A') + (ord(char) - ord('A')) % 6)
            else:
                encoded_message += char.swapcase()
        else:
            encoded_message += char
    return encoded_message