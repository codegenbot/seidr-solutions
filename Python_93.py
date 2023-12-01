def encode(message):
    encoded_message = ""
    vowels = ['a', 'e', 'i', 'o', 'u']
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                encoded_char = chr((ord(char.lower()) - ord('a') + 2) % 26 + ord('a'))
                encoded_message += encoded_char
            else:
                encoded_message += char.swapcase()
        else:
            encoded_message += char
    return encoded_message