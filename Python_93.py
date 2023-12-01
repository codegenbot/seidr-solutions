def encode(message):
    vowels = ['a', 'e', 'i', 'o', 'u']
    encoded_message = ""

    for char in message:
        if char.isalpha():
            if char.lower() in vowels and char.islower():
                encoded_message += chr(ord(char.lower()) + 1).upper()
            else:
                encoded_message += char.swapcase()
        else:
            encoded_message += char

    return encoded_message