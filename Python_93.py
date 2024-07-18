def encode(message):
    encoded_message = ''
    vowel_count = 0
    for char in message:
        if char.lower() in 'aeiou':
            if vowel_count % 2 == 0:
                encoded_message += chr(ord(char) + 2).upper()
            else:
                encoded_message += char
            vowel_count += 1
        else:
            encoded_message += char.swapcase()
    return encoded_message